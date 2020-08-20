const int pin_count = 4;

int inputPins[] = {2, 3, 4};
int ledPins[] = {10, 11, 12};

void setup() {
  for (int i = 0; i < pin_count; i++) {
    pinMode(inputPins[i], INPUT);
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], HIGH); // Setting the pull-up resistor
  }
}

void loop() {
  for (int i = 0; i < pin_count; i++) {
    int status = digitalRead(inputPins[i]);
    if ( status = LOW ) digitalWrite(ledPins[i], HIGH);
    else digitalWrite(ledPins[i], LOW);
  }
}
