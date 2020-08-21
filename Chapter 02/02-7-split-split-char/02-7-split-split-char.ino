const int MAX_STRING_LEN = 20;

char stringList[] = "Peter, Paul, Merry";
char stringBuffer[MAX_STRING_LEN];

void setup() {
  Serial.begin(9600);
}

void loop() {
  char *str;
  char *p;

  strncpy(stringBuffer, stringList, MAX_STRING_LEN);
  Serial.println(stringBuffer);

  for (str = strtok_r(stringBuffer, ", ", &p); str; str = strtok_r(NULL, ", ", &p)) {
    Serial.println(str);
  }

  delay(5000);

}
