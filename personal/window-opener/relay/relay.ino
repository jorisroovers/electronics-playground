
void setup()
{
    pinMode(2, INPUT);
    pinMode(4, INPUT);
    pinMode(8, OUTPUT);
    pinMode(12, OUTPUT);

}

void loop()
{
    if (digitalRead(2) == HIGH && digitalRead(4) == LOW) // Extend actuator
    {
        digitalWrite(8, HIGH);
        digitalWrite(12, LOW);
    } else if (digitalRead(2) == LOW && digitalRead(4) == HIGH) { // Retract actuator
        digitalWrite(8, LOW);
        digitalWrite(12, HIGH);
    } else {
      // both buttons are pressed or unpressed at the same time -> don't switch any relay.
      // NOTE: we don't want to switch both relays when both buttons are pressed to avoid a short-circuit
        digitalWrite(8, LOW);
        digitalWrite(12, LOW);
    }
    delay(100);
}
