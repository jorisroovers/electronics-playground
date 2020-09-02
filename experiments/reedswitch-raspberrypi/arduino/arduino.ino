void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(4);
  if (value == 1) {
    Serial.write("OFF\n");
  } else {
    Serial.write("ON\n");
  }
  
  delay(250);
}
