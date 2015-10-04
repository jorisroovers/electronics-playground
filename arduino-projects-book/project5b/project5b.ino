#include <Servo.h>

const int buttonInput = 7;

Servo myServo;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonInput, INPUT);
  Serial.begin(9600);
  myServo.attach(9);
}

const int OFF = 0;
const int ON = 1;
int STATE = OFF;

boolean buttonPressed = false;


void handleButtonPress(){
  int buttonInputState = digitalRead(buttonInput);
  if (buttonInputState == HIGH){
    if (!buttonPressed) {
        if (STATE == OFF){
           STATE = ON;
        } else {
           STATE = OFF;
        }
        Serial.print("button state: ");
        Serial.println(STATE);
    }
    buttonPressed = true;     
  } else {
    buttonPressed = false;
  }
}

void loop() {
  handleButtonPress();
  if (STATE == ON){
     myServo.write(160);
  } else {
     myServo.write(0);
  }
  delay(50);
  
  // put your main code here, to run repeatedly:

}
