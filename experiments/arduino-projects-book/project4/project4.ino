const int R = 11;
const int G = 9;
const int B = 10;


void setup() {
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(R, 0);
}

void loop() {
  // reading the light
  int rIn = analogRead(A0);
  delay(5);
  int gIn = analogRead(A1);
  delay(5);
  int bIn = analogRead(A2);
  
  int r = rIn/4;
  int g = gIn/4;
  int b = bIn/4;
 
  analogWrite(R, r);
  analogWrite(G, g);
  analogWrite(R, b); 
  
  Serial.print("In: ");
  Serial.print(rIn);
  Serial.print(" ");
  Serial.print(gIn);
  Serial.print(" ");
  Serial.print(bIn);
  
  Serial.print(" , RGB: ");
  Serial.print(r);
  Serial.print(" ");
  Serial.print(g);
  Serial.print(" ");
  Serial.println(b);

  delay(10);
}
