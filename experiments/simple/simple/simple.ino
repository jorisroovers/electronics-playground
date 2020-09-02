// Blinks an LED. Ideal if starting out after a while.


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println("hello world");
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  Serial.write("AB This is a test\n");
}
