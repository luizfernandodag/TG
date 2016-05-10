
/*
 * Funcao Setup:
 * 
 * Primeira funcao executada pelo sistema. 
 * Essa funcao eh utilizada para fazer as configuracoes iniciais
*/
int ler = 2;
void setup() {
  // Seleciona a porta digital 13 como saida de tensao
  pinMode(13, OUTPUT);
}

/*
 * Funcao Looop:
 * 
 * Funcao a ser executada continuamente pelo sistema
 * apos a execucacao da funcao setup()
 * 
*/

void loop() {

    digitalWrite(13, HIGH);// Coloca nivel alto de tensao (5 V) na porta digital 13   
    delay(1000);//Faz nada por 1000 ms ( 1 segundo)               
    digitalWrite(13, LOW);// Coloca nivel baixo de tensao (0 V) na porta digital 13      
    delay(1000);//Faz nada por 1000 ms ( 1 segundo)              
}
