#define pinoLed 13 // Pino no qual o LED estah conectado
int leituraAD = 0;// leitura do sensor LDR a ser feita com o conversor AD por meio da funcao analogRead().
                  // conversao  5 V -> 1023  (10 bits) 11111 11111
                  //            0 V - > 0              00000 00000
float sensorLuz;// Valor analogico aproximado da leitura do sensor

void setup()
{

Serial.begin(9600);//inicia a comunicacao serial Galileo -> Computador 
                   //                                    <-
pinMode(pinoLed, OUTPUT);// seleciona a porta digital pinoLed para saida 

}


char letra = 'a';
char * texto = "isso eh um texto";
void loop()
{
leituraAD = analogRead(A0);// ler o sinal anal?gico na porta digital A0

sensorLuz = (float) ( leituraAD * 5)/1023; //regra de 3 escala de 0 a 1023 digital, para 0 a 5 anal?gico

Serial.print("Leitura AD = ");
Serial.print(leituraAD);

Serial.print(" Conversao para float  = ");
Serial.println(sensorLuz);


delay(500); // faz nada por 500 ms

}