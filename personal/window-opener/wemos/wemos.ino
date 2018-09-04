#include <Servo.h>

Servo myServo;
int angle = 0;
// TODO: remove when using WEMOS D1
int D4 = 4;
int D9 = 9;
int D2 = 2;

void setup(){
  myServo.attach(D9);
  Serial.begin(115200);
  Serial.println("Starting...");
//   pinMode(WIFI_STATUS_LED_PIN, OUTPUT);
//   pinMode(HTTP_LED_SUCCESS_PIN, OUTPUT);
   pinMode(D4, INPUT);
   pinMode(D2, INPUT);
//   connectToWifi();
  
  myServo.write(angle);
}

void loop(){
  Serial.print("LOOP2: ");
  int goUp = digitalRead(D4);
  int goDown = digitalRead(D2);
  if (goUp == HIGH && angle < 179) {
    angle = min(angle+1, 179);
    myServo.write(angle);
  } else if (goDown == HIGH && angle > 0) {
    angle = max(angle-1, 0);
    myServo.write(angle);
  }
  Serial.print(" ");
  Serial.println(angle);
  delay(20);
}

