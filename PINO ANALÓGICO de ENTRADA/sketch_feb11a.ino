int valor = 0;
void setup()
{
	Serial.begin(9600);
  	pinMode(4, OUTPUT);
  	pinMode(7, OUTPUT);
}

void loop()
{
  valor = analogRead(A0);
	Serial.println(valor);
  if(valor < 511 )
    {
      digitalWrite(4, LOW);
      digitalWrite(7, HIGH);
    }
  if(valor > 511 )
    {
    digitalWrite(4, HIGH);
    digitalWrite(7, LOW);
    }
}
