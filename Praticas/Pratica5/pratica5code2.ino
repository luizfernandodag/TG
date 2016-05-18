
#define pinoClock  7
#define pinoLatch  6
#define pinoData  5

int i,j, temp;
int digitosResto[8];
void setup() {
pinMode(pinoLatch, OUTPUT);
pinMode(pinoClock, OUTPUT);
pinMode(pinoData, OUTPUT);
Serial.begin(9600);


}

void loop() 
{

	for(i = 0 ; i <= 255; i++)
	{
		digitalWrite(pinoLatch, LOW);
	
// envia dados nos pinos de saida a partir do bit menos significa
//tivo da variavel numeroOut no pinoData

		shiftOut(pinoData, pinoClock, LSBFIRST, i);
		Serial.print("Contagem = ");
    Serial.print(i);

		temp = i;// tem eh a variavel temporaria que passara pelo processo de divisoes sucessivas a cada iteracao
    j = 7; //indice dos resto inicial (digito menos significativo)
		Serial.print(" = ");
		while(j != 0)
		{   
				digitosResto[j] = temp%2;//registra o resto
				j--;
				temp /= 2;//atualizar o dividendo
				
		}
		
		//Imprimindo o numero na base binaria na ordem correta
		for(j = 0; j < 8; j++)
		{
				Serial.print(digitosResto[j]);
		}
		
		Serial.println();


		digitalWrite(pinoLatch, HIGH);
		delay(500);	
	}
}