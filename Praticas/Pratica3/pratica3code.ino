#define pinoBotao 2
#define pinoLedVermelho 3
#define pinoLedAmarelo 4
#define pinoLedVerde 5
#define pinoLedAzul 6
#define tempoDelay 300

void setup()
{
	pinMode(pinoBotao, INPUT); // Define o pino 2 como input de tensao
	pinMode(pinoLedVermelho, OUTPUT); // Define o pino 3 como output de tensao
	pinMode(pinoLedAmarelo, OUTPUT); // Define o pino 4 como output de tensao
	pinMode(pinoLedVerde, OUTPUT); // Define o pino 5 como output de tensao
	pinMode(pinoLedAzul, OUTPUT); // Define o pino 6 como output de tensao

}

int cont = 1;

void loop()
{
   
    if(digitalRead(pinoBotao) == HIGH)
    {
	     cont = cont + 1;

			 if(cont > 6)
			 {
					cont = 1;
			 }	
    }
	  
    if(cont == 1)
		{
		  digitalWrite(pinoLedVermelho, HIGH);
      digitalWrite(pinoLedAmarelo, HIGH);
			digitalWrite(pinoLedVerde, HIGH);
			digitalWrite(pinoLedAzul, HIGH);
      
			delay(tempoDelay);
			
			digitalWrite(pinoLedVermelho, LOW);
      digitalWrite(pinoLedAmarelo, LOW);
			digitalWrite(pinoLedVerde, LOW);
			digitalWrite(pinoLedAzul, LOW);
      
			delay(tempoDelay);
			
		}
		else
		{
			digitalWrite(cont, HIGH);
						
			delay(tempoDelay);
						
			digitalWrite(cont, LOW);
						
			delay(tempoDelay);
		}
}