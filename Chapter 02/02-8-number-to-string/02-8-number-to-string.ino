char buffer[12];

void setup() {
  Serial.begin(9600);
}

void loop() {
  long value = 12345;
  // long to ASCII
  ltoa(value, buffer, 10);

  Serial.print( value);
  Serial.print("has ");
  Serial.print(strlen(buffer));
  Serial.println( "digits");

}
