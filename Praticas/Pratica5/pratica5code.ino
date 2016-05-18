
#define pinoClock  7
#define pinoLatch  6
#define pinoData  5

byte numeroOut = 0;// byte = 8 bits
int bits[8];
int i;
void setup() {
pinMode(pinoLatch, OUTPUT);
pinMode(pinoClock, OUTPUT);
pinMode(pinoData, OUTPUT);
Serial.begin(9600);

//Setando a variavel bits = B11100101
bits[0] = 1; bits[1] = 0;bits[2] = 1;bits[3] = 0;bits[4] = 0;bits[5] = 1;bits[6] = 1;bits[7] = 1;

//calculando o numero a ser usado na função shiftOut usando a regra mostrada na seção 4.3.13
	for(i = 0; i < 8; i++)
	{
		numeroOut += bits[i]*pow(2,i);
	}

}

void loop() {


digitalWrite(pinoLatch, LOW);

// envia dados nos pinos de saida a partir do bit menos significa
//tivo da variavel numeroOut no pinoData

shiftOut(pinoData, pinoClock, LSBFIRST, numeroOut); 
// utilizar shiftOut(pinoData, pinoClock, LSBFIRST, B11100101); 
// funcionaria da mesma forma, visto que o compilador sabe lidar com as bases decimal, binária, octal e hexadecimal
// Entretanto, o objetico da prática e a utlização de vetores, daí forçar o cálculo binario -> decimal 


digitalWrite(pinoLatch, HIGH);
}