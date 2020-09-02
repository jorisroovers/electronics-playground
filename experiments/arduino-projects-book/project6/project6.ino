const int ledPin = 13;
int sensorValue = 0;
int sensorLow = 1023;
int sensorHigh = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  Serial.begin(9600);
  Serial.print("Initializing...");
  while (millis() < 5000) {
    sensorValue = analogRead(A0);
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }
  }
  digitalWrite(ledPin, LOW);
  Serial.println("DONE");
  Serial.print("SENSOR LOW: ");
  Serial.print(sensorLow);
  Serial.print(" HIGH: ");
  Serial.println(sensorHigh);
}

void loop() {
  sensorValue = analogRead(A0);
  int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 4000);
  Serial.print("PITCH: ");
  Serial.println(pitch);
  tone(8, pitch, 20);
  delay(10);

  //  for (int i=0;i<3;i++){
  //    tone(8, 500, 300);
  //    delay(500);
  //    tone(8, 500, 20);
  //    delay(500);
  //  }
  //    tone(8, 2500, 20);
  //    delay(500);

  //  analogWrite(8, 500);
  //  delay(100);

}
