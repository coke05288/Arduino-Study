String text = "Peter, Paul, Merry";
String msg = text;
int commaPosition;

void setup() {
  Serial.begin(9600);
  Serial.println(msg);

  do {
    commaPosition = msg.indexOf(',');
    if (commaPosition != -1) {
      Serial.println(msg.substring(0, commaPosition));
      msg = msg.substring(commaPosition + 1, msg.length());
    } else {
      if (msg.length() > 0)Serial.println(msg);
    }
  } while (commaPosition >= 0);

}

void loop() {
  // put your main code here, to run repeatedly:

}
