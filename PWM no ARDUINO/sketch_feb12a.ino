int valor = 0;
void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	Serial.print("Valores: ");
  Serial.print(analogRead(A0));
	Serial.print(" = ");
	Serial.println(valor);
  delay(2000);
  valor = map(analogRead(A0),0,1023,0,255);
  analogWrite(3, valor);
  analogWrite(5, valor);

}