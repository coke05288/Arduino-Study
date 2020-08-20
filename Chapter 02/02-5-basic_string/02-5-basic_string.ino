String text1 = "This string";
String text2 = " has more text";

char oldString[] = "This is a character array";
String newString = oldString;

void setup() {
  Serial.begin(9600);

  Serial.print(text1);
  Serial.print(" is ");
  Serial.print(text1.length());
  Serial.println(" characters long.");

  text1.concat(text2);
  Serial.println(text1);
}

void loop() {
  

}
