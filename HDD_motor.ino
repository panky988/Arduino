int A=2;
int B=3;
int C=4;
const int timer = 130;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
}

void loop() {
  motor();
}
void motor()
{
  delay(timer);
  digitalWrite(C, LOW);
  delay(timer);
  digitalWrite(B, HIGH);
  delay(timer);
  digitalWrite(A, LOW);
  delay(timer);
  digitalWrite(C, HIGH);
  delay(timer);
  digitalWrite(B, LOW);
  delay(timer);
  digitalWrite(A, HIGH);
}
