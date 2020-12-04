int motors[] = {2,3,4};
int pinCount = 2;
const int timer = 130;

void setup() {
  for (int thisPin = 0; thisPin <= pinCount; thisPin++) {
    pinMode(motors[thisPin], OUTPUT);
  }
  digitalWrite(motors[0], HIGH);
  digitalWrite(motors[2], HIGH);
}

void loop() {
  motor();
}
void motor()
{
  delay(timer);
  digitalWrite(motors[2], LOW);
  delay(timer);
  digitalWrite(motors[1], HIGH);
  delay(timer);
  digitalWrite(motors[0], LOW);
  delay(timer);
  digitalWrite(motors[2], HIGH);
  delay(timer);
  digitalWrite(motors[1], LOW);
  delay(timer);
  digitalWrite(motors[0], HIGH);
}
