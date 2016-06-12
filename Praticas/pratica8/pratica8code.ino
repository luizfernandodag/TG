#include "LedControl.h"
LedControl lc=LedControl(12,11,10,1); // 
#define dificuldade 1
#define tempo1 1000
#define tempo2 750
#define tempo3 500
// pino 12 conectado ao pino 1 do  MAX7219 
// pino 11 conectado ao pino 13 CLK 
// pino 10 conectado ao pino 12 LOAD
// O número 1 indica que 1 MAX7219 será usado

//*****************************
// Struct definidas para o programa
typedef struct
{
  byte x;
  byte y;
  byte estado; 
  
}Celula;//Estrutura de uma celula

typedef struct
{
  Celula corpo [64];
  int numCelulasOcupadas;
}Snake;//Estrutura do corpo da cobra

//*****************************

//*****************************************
//Variaveis globais de funcionamento do programa
int tempo;
int movimentoX;
int movimentoY;
byte matriz[8][8];
Snake snake;
Celula presa;

int sensorX;
int sensorY;
//****************************************************


//Funcao para inicializar a matriz, o corpo da cobra e o tempo de transicao entre celulas (dificuldades)
void inicializa()
{
  int i, j,cont =0;

   //seta dificuldade do jogo
   switch(dificuldade)
   {
    case 1:
      tempo = tempo1;
    break;
    case 2:
      tempo = tempo2;
    break;
    case 3:
      tempo = tempo3;
    break;
   }
  //inicializa o movimento inicial da cobra
  movimentoX = 1;
  movimentoY = 0; 

  //Inicializa matriz e corpo da cobra
  snake.numCelulasOcupadas = 3;
  for(i = 0; i < 8; i++ )
  {
    for(j = 0; j < 8 ; j++ )
    {
      matriz[i][j] = 0; //todos LEDs desligados
     
       // posicao inicial cobra 3 partes (2,0), (1,0) (0,0)
      
        if(cont == 0)
        {
          snake.corpo[cont].x = 2;
          snake.corpo[cont].y = 7;
          snake.corpo[cont].estado = 1;  
        }
        else if(cont == 1)
        {
          snake.corpo[cont].x = 1;
          snake.corpo[cont].y = 7;
          snake.corpo[cont].estado = 1;    
        }
        else if (cont == 2)
        {
          snake.corpo[cont].x = 0;
          snake.corpo[cont].y = 7;
          snake.corpo[cont].estado = 1;    
        }
        else
        {
          snake.corpo[cont].x = -1;
          snake.corpo[cont].y = -1;
          snake.corpo[cont].estado = -1;    
        }
         
      cont++;
    }
    
  }
}


//funcao para ler o joystick
// movimentoX = 1; direita
// movimentoX = -1 esquerda
// movimentoX = 0, faz nada
// movimentoY = 1; cima
// movimentoY = -1 baixo
// movimentoY = 0, faz nada

void leSensores()
{
  int i;
  int sensorX = 0, sensorY = 0;
  for(i = 0;i < 10; i++)
  {
    sensorX +=analogRead(A0);
    sensorY +=analogRead(A1);
  }

  sensorX /= 10;
  sensorY /= 10;

  if(movimentoY == 0)
  {
          if(sensorY > 900 )
            {
              movimentoY = -1;
              movimentoX = 0;
              return;
            }
          else if(sensorY < 100)
          {
            movimentoX = 0;
            movimentoY = 1;
            return;
          }
  }
  if(movimentoX == 0)
  {
      if(sensorX > 900 )
            {
              movimentoY = 0;
              movimentoX = 1;
              return;
            }
          else if(sensorX < 100)
          {
            movimentoX = -1;
            movimentoY = 0;
            return;
          }
  }
  
}


//funcao para verificar se a posicao (x,y) ja esta ocupada pela cobra
// 1 - posicao ocupada
// 0 - posicao desocupada 
int verificaPosicoes(int x, int y)
{
   int i;
   for(i = 0; i < snake.numCelulasOcupadas; ++i)
   {
        if(snake.corpo[i].x == x && snake.corpo[i].y == y )
        {
          //posicao ocupada pelo corpo da cobra
          return 1; 
        }  
   }
   
   //posicao livre
   return 0;
}

//
//gera uma posicao aleatoria para a presa (x,y) num lugar que nao ha cobra
void geraPosicaoPresa()
{
  
  do{
      presa.x = random(8); //gera um numero aleatorio entre 0 e 7 
      presa.y = random(8); 
  }while(verificaPosicoes(presa.x, presa.y));
}

int verificaAutoFagia()
{
  int i;
   for(i = 1; i < snake.numCelulasOcupadas; ++i)
   {
        if(snake.corpo[i].x == snake.corpo[0].x && snake.corpo[i].y == snake.corpo[0].y )
        {
          //cobra se atacou
          return 1; 
        }  
   }
   
   
   return 0;
}

//funcao para atualizar as posicoes das celuals do corpo da cobra
void atualiza()
{
  int i;
  
  Celula temp,temp2;
  
  temp = snake.corpo[0];

  
  if(snake.corpo[0].x + movimentoX > 7 || snake.corpo[0].x + movimentoX  < 0 || verificaAutoFagia())
  {//FIM
    inicializa();
  }

  if(snake.corpo[0].y + movimentoY > 7 || snake.corpo[0].y + movimentoY  < 0)
  {//FIM
    inicializa();
  }
  
  snake.corpo[0].x += movimentoX;
  snake.corpo[0].y += movimentoY;


    //verifica se o alvo foi alcancado
    if(snake.corpo[0].x == presa.x && snake.corpo[0].y == presa.y)
    {  
      snake.numCelulasOcupadas++;
      geraPosicaoPresa();
    }


  for(i = 1; i < snake.numCelulasOcupadas; i++)
  {
    temp2 = snake.corpo[i]; 
    snake.corpo[i] = temp;
    temp =  temp2;  
  }
  
  //snake.corpo[1].x += tempx
  //snake.corpo[1].y += movimentoY;
   
  
}

void printSnake()
{
  int i;
  lc.clearDisplay(0);
  for(i = 0; i < snake.numCelulasOcupadas;++i)
  {
    lc.setLed(0,snake.corpo[i].y,snake.corpo[i].x,true); // desliga o LED na 
  }

  lc.setLed(0,presa.y,presa.x,true); // desliga o LED na 
}

void printaSerial()
{
  
    Serial.print(0);
    Serial.print(": ( ");
    Serial.print(snake.corpo[0].x);
    Serial.print(" , ");
    Serial.println(snake.corpo[0].y);
  
}
void setup()
{
  // O número 0 como o primeiro argumento de muitas funções
  // da biblioteca LedControl.h indica o uso de 1 chip MAX7219 
  Serial.begin(9600);
  randomSeed(analogRead(2));//inicializa  uma sequencia de numeros aleatorios de um pino analogico aberto 
  lc.shutdown(0,false);// Desliga o modo de economia de energia,  //habilita o display
  
  lc.setIntensity(0,8);// seta a claridade (input entre 0 e 15)
  lc.clearDisplay(0);// limpa o display

  //inicializa parametros do jogo
  inicializa();
  geraPosicaoPresa();
  printSnake();
  delay(tempo);
}


void loop()
{
  leSensores();
  atualiza();
  printSnake();
  printaSerial();
  // esse delay define a dificuldade do jogo
  delay(tempo);
}