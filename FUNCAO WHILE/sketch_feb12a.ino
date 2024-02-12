int botao1 = 8;
int botao2 = 9;
int x = 0;
int y = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
}

void loop()
{
  if(digitalRead(botao1) == HIGH)
  {
	while(x<10)
    {
    	Serial.print("Valor de x = ");
    	Serial.println(x);
    	delay(1000);
    	x=x+1;
    }
  }
  if(digitalRead(botao2) == HIGH)
  {
	do
    {
    	Serial.print("Valor de y = ");
    	Serial.println(y);
    	delay(1000);
		y=y+1;
    }while(y<10);
  }
}