#include <Ultrasonic.h>

Ultrasonic ultrasonic(12, 13);

void setup() {
  Serial.begin(9600);
  Serial.println("BEGIN");
}

void loop() {
  Serial.print("Distance: ");
  Serial.print(ultrasonic.Ranging(CM));
  Serial.println(" CM");
  
  delay(500);
 
}
