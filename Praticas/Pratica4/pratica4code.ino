#define pinoBotao 2
#define tempoDelayPadrao 200
#define ledAzul 3
#define ledverde 4
#define ledAmarelo 5
#define ledvermelho 6

void setup()
{ 
	int i;
  for( i = 3; i <= 6; i++)//usando o laco for para definir as portas 3 a 6 como portas de saida
	{
			pinMode(i, OUTPUT); // Define o pino 3 como output de tensao
	}
   
	pinMode(pinoBotao, INPUT); // Define o pino 2 como input de tensao

}

int comportamento = 0;
int i;
int sensorA0;
void loop()
{
		i = 0;

		for( i = ledAzul ; i <= ledVermelho; i++) //Apagando todos LEDs
				{
						digitalWrite(i, LOW);
				}
		i= 0;

    sensorA0 = analogRead(A0);// 0 < sensorA0 <= 1023

		if(digitalRead(pinoBotao) == HIGH)//Altera o comportamento a ser obedecido ao aperta o botao
		{
				comportamento += 1;
				if(comportamento > 3)
				comportamento = 0;
		}

	  switch (comportamento)
		{
	
			case 1:// Comportamento 1: Piscar apenas um LED a depender do valor de tensao lido no potenciometro
				if(sensorA0 < 250)
				{
						while( i < 7)
						{
								if( i == ledAzul)
								{
										digitalWrite(i, LOW);
										delay(sensorA0);
										digitalWrite(i, HIGH);
										delay(sensorA0);
								}
								else
								{
										digitalWrite(i, LOW);
										
								}
							i++;
						}
						i = 0;
				}
				else if(sensorA0 >= 250 && sensor < 500)
				{
						while( i < 7)
						{
								if( i == ledVerde)
								{
										digitalWrite(i, LOW);
										delay(sensorA0);
										digitalWrite(i, HIGH);
										delay(sensorA0);
								}
								else
								{
										digitalWrite(i, LOW);
										
								}
							i++;
						}
						i = 0;
				}
				else if(sensor >= 500 && sensor < 750)
				{
						while( i < 7)
						{
								if( i == ledAmarelo)
								{
										digitalWrite(i, LOW);
										delay(sensorA0);
										digitalWrite(i, HIGH);
										delay(sensorA0);
								}
								else
								{
										digitalWrite(i, LOW);
										
								}
							i++;
						}
						i = 0;
				}
				else if(sensor >= 750 && sensor <= 1023)
				{
						while( i < 7)
						{
								if( i == ledVermelho)
								{
										digitalWrite(i, LOW);
										delay(sensorA0);
										digitalWrite(i, HIGH);
										delay(sensorA0);
								}
								else
								{
										digitalWrite(i, LOW);
										
								}
							i++;
						}
						
						i = 0;
				}
			break;

			case 2://Comportamento 2: piscar os leds, do azul ao vermelho com velocidade determinada pelo potenciometro
				for( i = ledAzul ; i <= ledVermelho; i++)
				{
						
										digitalWrite(i, HIGH);
										delay(sensorA0);
										digitalWrite(i, LOW);
										delay(sensorA0);
				}

			break;
			case 3://Comportamento 3: COMPORTAMENTO A SER ESCOLHIDO PELOS ALUNOS
				for( i = ledVermelho ; i >= ledAzul; i--)// NESSE EXEMPLO, FOI ESCOLHIDO REALIZAR O COMPORTAMENTO INVERSOR AO COMPORTAMENTO 2
				{
						
										digitalWrite(i, HIGH);
										delay(sensorA0);
										digitalWrite(i, LOW);
										delay(sensorA0);
				}
			break;
			default:
				for( i = ledAzul ; i <= ledVermelho; i++)
				{
						
										digitalWrite(i, LOW);
				}
		}

}