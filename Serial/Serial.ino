volatile int state = LOW;
int pin = 13;

void setup()
{
  pinMode(pin, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(115200);
  attachInterrupt(digitalPinToInterrupt(3), interrupt, CHANGE);
}

void loop()
{
  if (Serial.available() > 0) {
    int letter = Serial.read();
    if (letter == 65) {
      digitalWrite(13, HIGH);
      Serial.println("Led aceso");
    }
    if (letter == 66) {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      Serial.println("Led apagado");
    }
  }
}


void interrupt() {
      digitalWrite(12, HIGH);
}
