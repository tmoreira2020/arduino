void setup() {

 pinMode(3, OUTPUT);
}

void loop() {


  analogWrite(3, 255);
  delay(3000);
  analogWrite(3, 50);
  delay(3000);
  
}
