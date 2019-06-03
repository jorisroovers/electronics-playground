// This code is really the same as simple.ino (=i.e. led blinking). Have a look at the image setting next to this code.
// Good tutorial: http://www.circuitbasics.com/setting-up-a-5v-relay-on-the-arduino/

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
}
