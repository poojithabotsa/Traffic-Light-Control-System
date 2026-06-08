#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int redLED = 4;
int yellowLED = 9;
int greenLED = 10;

int count = 0;

void setup() {
  lcd.init();
  lcd.backlight();

  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  lcd.setCursor(0,0);
  lcd.print("Pedestrians:");
}

void loop() {

  count++;

  lcd.setCursor(0,1);
  lcd.print("      ");
  lcd.setCursor(0,1);
  lcd.print(count);

  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
  delay(3000);

  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(2000);

  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(5000);

  digitalWrite(redLED, LOW);

}
