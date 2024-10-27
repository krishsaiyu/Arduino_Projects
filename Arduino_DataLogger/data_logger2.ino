int V,X;
void setup() {
  Serial.begin(9600);
  Serial.println("CLEARDATA");
  Serial.println("LABEL,t,A1,A2");
}

void loop() {
  V=analogRead(A1);
  X=123;
  Serial.print("DATA,TIME,");
  Serial.print(V);
  Serial.print ( ",");
  Serial.println(X);

  delay(10);
}
