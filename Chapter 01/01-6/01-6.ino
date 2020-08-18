const int ledPin = 13;
const int sensorPin = 0;

const int minDuration = 100;
const int maxDuration = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int rate = analogRead(sensorPin);

  rate = map(rate, 200, 800, minDuration, maxDuration);
  rate = constrain(rate, minDuration, maxDuration);

  Serial.println(rate);
  digitalWrite(ledPin, HIGH);
  delay(rate);
  digitalWrite(ledPin, LOW);
  delay(rate);
}
