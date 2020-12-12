// Szervo vezérlése potenciométerrel
#include <Servo.h>

Servo servo; // Szervo objektum létrehozása a szervo vezérléséhez

int potmeter = 0; // analog pin, potmeter
int servoPin = 2; // digital pin, servo
int val; // változó az analog pin értékének olvasásához

void setup() 
{
  servo.attach(servoPin); // servoPin cstolása a seervohoz
}

void loop() 
{
  val = analogRead(potmeter); // beolvassa a potenciométer értékét (0 és 1023 közötti érték)
  val = map(val, 0, 1023, 0, 180); // potmeter értékét(0-1023) = servo értéke(0-180) és ezt eltárolja a val-ba
  servo.write(val); // a szervo helyzetét a val érték szerint állítja be
  delay(15); // vár 0,15mp-et
}
