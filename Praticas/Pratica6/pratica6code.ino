#define ledQuente 2
#define ledNormal 3
#define ledFrio 4	
#define temperaturaAmbiente 24.0
//funcao para inicializar as portas digitasis
void inicializaPortasDigitais()
{
 		pinMode(ledQuente, OUTPUT);
  		pinMode(ledNormal, OUTPUT);
		pinMode(ledFrio, OUTPUT);
}
//funcao para inicilizar a comunicacao serial de forma a poder printar a temperatura no monitor serial
void inicializaSerial()
{
	Serial.begin(9600);
}

// funcao para ler a pora analogica porta e converter o valor lido para float
float leTemperatura(int porta)
{
	float valorLido;
    int sensor;
	
	sensor = analogRead(porta);
	valorLido = (float)(sensor*5)/1023; // regra de tres entre as escalas 0 -> 1023  ; 0 -> 5
	// aqui valorLido guarda o valor da tensão lida nos terminais do LM35

	valorLido = valorLido/0.01; // Agora, valorLido guardar a temperatura lida (sensibilidade LM35 = 10mV/C) 

	return valorLido;
}

void escreveTemperaturaTerminal(float temperatura)
{
	Serial.print("Temperatura = ");
	Serial.print(temperatura);
}

void piscaLed(float temperatura)
{		
		if(temperatura > temperaturaAmbiente  - 2 &&  temperatura < temperaturaAmbiente +2 )
		{
				digitalWrite(ledQuente, LOW);
				digitalWrite(ledFrio, LOW);
				digitalWrite(ledNormal, HIGH);
		}
		else if ( temperatura >= temperaturaAmbiente +2 )
		{
				digitalWrite(ledQuente, HIGH);
				digitalWrite(ledFrio, LOW);
				digitalWrite(ledNormal, LOW);
		}
		else if( temperatura <= temperaturaAmbiente - 2)
		{
				digitalWrite(ledQuente, LOW);
				digitalWrite(ledFrio, HIGH);
				digitalWrite(ledNormal, LOW);
		}

}


void setup()
{
	inicalizaPortasDigitais();
    inicialzaSerial();
}

float temperatura;
void loop()
{
	temperatura = leTemperatura(0);
	escreveTemperaturaTerminal(temperatura);
	piscaLed(temperatura);
	
	delay(300);
}