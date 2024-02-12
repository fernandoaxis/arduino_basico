//Biblioteca para uso da tela de LCD:
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int op;
int LED_Verde = 6;
int LED_Azul = 7;


void setup()
{
  
  pinMode (LED_Verde, OUTPUT);
  pinMode (LED_Azul, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Acender: V ou A");
  lcd.setCursor(0,1);
  lcd.print("Apagar: v ou a");
  delay(6000);		
  lcd.clear();
  
}

void loop(){
  
  if (Serial.available()){
 	op = Serial.read();

	if (op==86) {
		digitalWrite(LED_Verde, HIGH);
		lcd.setCursor(0,0);
		lcd.print("LED verde Aceso  ");
    }
    if (op==118) {
		digitalWrite(LED_Verde, LOW);
		lcd.setCursor(0,0);
		lcd.print("LED verde Apagado  ");
    }
    if (op==65) {
		digitalWrite(LED_Azul, HIGH);
		lcd.setCursor(0,1);
		lcd.print("LED azul Aceso  ");
    }
    if (op==97) {
		digitalWrite(LED_Azul, LOW);
		lcd.setCursor(0,1);
		lcd.print("LED azul Apagado  ");
    }
  }
}
