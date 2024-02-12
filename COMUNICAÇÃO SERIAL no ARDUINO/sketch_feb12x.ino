const int ledCinza = 7;
const int ledMarrom = 6;
const int ledRosa = 5;
const int ledRoxo = 4;
const int ledAzul = 3;
const int ledTurquesa = 2;

byte byteRead;

void setup()
{
  Serial.begin(9600);
  pinMode(ledCinza, OUTPUT);
  pinMode(ledMarrom, OUTPUT);
  pinMode(ledRosa, OUTPUT);
  pinMode(ledRoxo, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledTurquesa, OUTPUT);
}

void loop()
{
  if(Serial.available())
  {
  	byteRead = Serial.read();
    switch(byteRead)
    {
    	case '1':
      		digitalWrite(ledCinza,!digitalRead(ledCinza));
      		Serial.print("Estado led cinza = ");
      		Serial.println(digitalRead(ledCinza));
      	break;
      
    	case '2':
      		digitalWrite(ledMarrom,!digitalRead(ledMarrom));
      		Serial.print("Estado led marrom = ");
      		Serial.println(digitalRead(ledMarrom));
      	break;
      
    	case '3':
      		digitalWrite(ledRosa,!digitalRead(ledRosa));
      		Serial.print("Estado led rosa = ");
      		Serial.println(digitalRead(ledRosa));
      	break;
      
    	case '4':
      		digitalWrite(ledRoxo,!digitalRead(ledRoxo));
      		Serial.print("Estado led roxo = ");
      		Serial.println(digitalRead(ledRoxo));
      	break;
      
    	case '5':
      		digitalWrite(ledAzul,!digitalRead(ledAzul));
      		Serial.print("Estado led azul = ");
      		Serial.println(digitalRead(ledAzul));
      	break;
      
     	case '6':
      		digitalWrite(ledTurquesa,!digitalRead(ledTurquesa));
      		Serial.print("Estado led turquesa = ");
      		Serial.println(digitalRead(ledTurquesa));
      	break;
      
    }
  }
}