#include <Servo.h>

Servo myServo;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);
  myServo.attach(9);
}

int prevPotVal = 0;

void loop() {
  // put your main code here, to run repeatedly:
  int potVal = analogRead(A0);
  if (potVal > 0){
     prevPotVal = potVal;
  } else {
     potVal = prevPotVal;  
  }
  int angle = map(potVal, 0 , 1023, 0, 179);
  Serial.print("Potentiometer value: ");
  Serial.print(potVal);
  Serial.print(" angle: ");
  Serial.println(angle);
  myServo.write(angle); 
  delay(15);
}
