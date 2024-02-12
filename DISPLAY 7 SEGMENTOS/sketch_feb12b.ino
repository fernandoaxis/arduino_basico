int botaoUp = 0;
int botaoRst = 0;
int botaoDown = 0;
int click = 0;

void setup()
{
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  
  for(int i=6;i<13;i=i+1){
  	pinMode(i, OUTPUT);
  }
}
void loop()
{
  botaoUp = digitalRead(5);	
  botaoDown = digitalRead(4);
  botaoRst = digitalRead(3);
  
  if(botaoUp == HIGH){
    click = (click + 1);
    delay(200);
  }
    if(botaoDown == HIGH){
    click = (click - 1);
    delay(200);
  }
  
  if(botaoRst == HIGH){
    click = (0);
    delay(200);
  }
  
  //Visor 
  
  if(click == 1) {
  	digitalWrite(6, HIGH);
   	digitalWrite(7, LOW);
  	digitalWrite(8, LOW);
  	digitalWrite(9, LOW);
  	digitalWrite(10, LOW);
  	digitalWrite(11, LOW);
  	digitalWrite(12, HIGH);

  }
  if(click == 2) {
  	digitalWrite(6, LOW);
   	digitalWrite(7, HIGH);
  	digitalWrite(8, HIGH);
  	digitalWrite(9, HIGH);
  	digitalWrite(10, LOW);
  	digitalWrite(11, HIGH);
  	digitalWrite(12, HIGH);

  } if(click == 3) {
  	digitalWrite(6, HIGH);
   	digitalWrite(7, HIGH);
  	digitalWrite(8, LOW);
  	digitalWrite(9, HIGH);
  	digitalWrite(10, LOW);
  	digitalWrite(11, HIGH);
  	digitalWrite(12, HIGH);

  }
  if(click == 4) {
  	digitalWrite(6, HIGH);
   	digitalWrite(7, LOW);
  	digitalWrite(8, LOW);
  	digitalWrite(9, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(11, LOW);
  	digitalWrite(12, HIGH);

  }
}


