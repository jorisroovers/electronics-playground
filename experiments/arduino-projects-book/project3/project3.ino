void setup() {
  Serial.begin(9600);
  Serial.println("SETUP");
  
  for (int i=3; i < 6;i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW); 
  }
  
}
  
  
void loop() {
  // reset LEDs
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  
  float baselineTemp = 23.0;
  int sensorVal = analogRead(A0);
  float voltage = (sensorVal / 1024.0) * 5.0;
  float temperature = (voltage - .5) * 100;
  Serial.print("sensor value: ");
  Serial.print(sensorVal);
  Serial.print(", voltage: ");
  Serial.print(voltage);
  Serial.print(", temp: ");
  Serial.print(temperature);
  Serial.println("C");
  
  
  if (temperature > baselineTemp +1) {
      digitalWrite(3, HIGH);
  }
  if (temperature > baselineTemp +2) {
      digitalWrite(4, HIGH);
  }
  if (temperature > baselineTemp +3) {
      digitalWrite(5, HIGH);
  }
  delay(100);

}
