void setup() {
  Serial.begin(9600);
  Serial.println("BEGIN");
  // put your setup code here, to run once:
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  int value = analogRead(A0);
  Serial.print("value: ");
  Serial.println(value);
  delay(250);
}
