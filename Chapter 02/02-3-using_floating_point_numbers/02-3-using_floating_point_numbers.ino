float value = 1.1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = value - 0.1;
  if(value == 0){
    Serial.println("The value is exactly zeor");
  }else if(almostEqual(value,0)){
    Serial.print("The value : ");
    Serial.print(value);
    Serial.println(" is almost equal to zero.");
  }else{
    Serial.println(value);
  }
}

boolean almostEqual(float a, float b){

  const float DELTA = .00001;
  if (a == 0) return fabs(b) <= DELTA;
  if (b == 0) return fabs(a) <= DELTA;
  
  return fabs((a - b) / max(fabs(a), fabs(b))) <= DELTA;
}
