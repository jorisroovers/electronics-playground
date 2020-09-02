#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;
int incomingByte = 0;


void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Foo");
  lcd.setCursor(0,1);
  lcd.print("Bar");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
      String str = Serial.readStringUntil('\n');
      lcd.clear();
      lcd.print(str);
      Serial.println(str);
  } else {
       Serial.println("no data");
  }
}
