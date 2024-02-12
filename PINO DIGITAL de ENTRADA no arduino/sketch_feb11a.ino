int led = 4;
int botao = 2;

void setup()
{
    pinMode(led, OUTPUT);
    pinMode(botao, INPUT);
}

void loop()
{  
    if(digitalRead(botao) == HIGH)
    {
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
      delay(1000);
    }
    else
    {
      digitalWrite(led, LOW);
    }
  
}
