const float CELSIUS_BASE = 0.48828125;

void setup() {
  pinMode(0, INPUT);
  Serial.begin(115200);
}

void loop() {

  int in = analogRead(0);
  float temperature = in * CELSIUS_BASE;
  Serial.println(temperature);
  delay(5000);
}
