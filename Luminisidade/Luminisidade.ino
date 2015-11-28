
void setup() {
  pinMode(0, INPUT);
  Serial.begin(115200);
}

void loop() {

  int in = analogRead(0);
  
  Serial.println(in);
  delay(1000);
}
