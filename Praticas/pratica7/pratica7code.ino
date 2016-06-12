

#define int0 0
#define int1 1
#define intPin0 2
#define intPin1 3
#define ledJogador1 4;
#define ledJogador2 5;
#define tempoDisputa 5000 // 5000 ms = 5 segundos
//Parametros dos jogadores 1 e 2 
const char * nomeJogador1 = "Jogador1";
const char * nomeJogador2 = "Jogador2";
const char * fraseVitoriaJogador1 = "Frase Vitoria1";
const char * fraseVitoriaJogador1 = "Frase Vitoria2";

//Struct para armazenar as informacoes de um jogador
typedef struct
{
   int numClicks;
   char *nome;
   char *fraseVitoria;
	 float velocidade;
}Jogador;

//variavel de cada um dos jogadores
Jogador jogador1;
Jogador jogador2;

// Rotina de interupcao de hardware na porta digital 2
void rotinaInt0()
{
	jogador1.numClicks++;
}
// Rotina de interupcao de hardware na porta digital 3
void rotinaInt1()
{
	jogador2.numClicks++;
}

//funcao para inicializar as struct de cada jogador
void inicializaJogador(jogador * jog, int numJogador)
{
   jog[0].numClicks = 0;
   if(numJogador == 1)
		{	
   		jog[0].nome = nomeJogador1;
			jog[0].fraseVitoria = fraseVitoriaJogador1;
			velocidade = 0.0;
    }
  else if (numJogador == 2)
	{
		  jog[0].nome = nomeJogador2;
			jog[0].fraseVitoria = fraseVitoriaJogador2;
			velocidade = 0.0;
	}
}

//funcao para calcular a velocidade de apertar os botoes de cada jogador
float calculaVelocidade( int numClicks, int numMiliSegundos)
{

		return (float)(numClicks*1000)/numMiliSegundos;
}

//Funcao para printar as informacoes da disputa
// printar a frase do vencedor
// e piscar o led dele a quantidade de vezes que ele
// pressionou o botao
void resultadoFinal(Jogador jogador1, Jogador jogador2)
{
int i;
	//Info jogador 1
	Serial.println("Resultados Finais:");
	Serial.println("Jogador 1:");
	Serial.print("Nome: ");
	Serial.println(jogador1.nome);
	Serial.print("Numero de clicks: ");
	Serial.println(jogador1.numClicks);
	Serial.print("Jogador 1 - velocidade: ");
	Serial.print(jogador1.velocidade);
  Serial.println(" clicks por segundo");
//Info jogador 2
	Serial.println("Resultados Finais:");
	Serial.println("Jogador 2:");
	Serial.print("Nome: ");
	Serial.println(jogador2.nome);
	Serial.print("Numero de clicks: ");
	Serial.println(jogador2.numClicks);
	Serial.print("Jogador 2 - velocidade: ");
	Serial.println(jogador2.velocidade);
	Serial.println(" clicks por segundo");

if(jogador1.velocidade > jogador2.velocidade)
{
	Serial.print("O vencedor é ");
	Serial.println(jogador1.nome);
	Serial.println(jogador1.fraseVitoria);
	//pisca led do vencedor o numero de vezes que ele apertou o botao
	for(i = 0; i < jogador1.numClicks; ++i;)
	{
		digitalWrite(ledJogador1, HIGH);
		delay(200);
		digitalWrite(ledJogador1, LOW);
		delay(200);
	}
}
else if (jogador1.velocidade < jogador2.velocidade)
{

	Serial.print("O vencedor é ");
	Serial.println(jogador2.nome);
	Serial.println(jogador2.fraseVitoria);
	for(i = 0; i < jogador2.numClicks; ++i;)
	{
		digitalWrite(ledJogador2, HIGH);
		delay(200);
		digitalWrite(ledJogador2, LOW);
		delay(200);
	}

}
else
{
	Serial.println("EMPATE!");
	Serial.println(jogador1.fraseVitoria);
	Serial.println(jogador2.fraseVitoria);
	for(i = 0; i < jogador2.numClicks; ++i;)
	{
		digitalWrite(ledJogador2, HIGH);
		digitalWrite(ledJogador1, HIGH);
		delay(200);
		digitalWrite(ledJogador2, LOW);
		digitalWrite(ledJogador1, LOW);
		delay(200);
	}
}



}

void zeraJogadores()
{
	jogador1.numClicks = 0;
	jogador2.numClicks = 0;
}
	
void setup()
{ 
	//Configuarando comunicacao serial
	Serial.begin(9600);
	//Configurando pinos digitais
	pinMode(ledJogador1, OUTPUT);
	pinMode(ledJogador2, OUTPUT);
	pinMode(intPin0, INPUT);
	pinMode(intPin1, INPUT);
  //Vinculando rotinas de interrupcao de hardware
	attachInterrupt(int0,rotinaInt0, RISING);
  attachInterrupt(int1,rotinaInt1, RISING);
	//Inicializando os parametros dos dois jogadores
	inicializaJogador(&jogador1, 1);
	inicializaJogador(&jogador2, 2);

}

void loop()
{
//No periodo de delay, as interrupcoes continuam a ser lidas normalmente
delay(tempoDisputa);

jogador1.velocidade = calculaVelocidade(jogador1.numClicks, tempoDisputa);
jogador2.velocidade = calculaVelocidade(jogador2.numClicks, tempoDisputa);
//
resultadoFinal(jogador1,jogador2);

zeraJogadores()
delay(10000);
	

}