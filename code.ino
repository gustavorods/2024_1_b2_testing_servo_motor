#include <Servo.h>

Servo servoMotor;

void setup()
{
 servoMotor.attach(7); // Gerencia o controle através do pino 7 do arduino
}

void loop()
{
  for (int i=0; i<=180; i++) {
  	servoMotor.write(i);
    delay(20);
  }
  
  delay(2000);
  
  for(int i=180; i>=0; i--) {
  	servoMotor.write(i);
    delay(20);
  }
  
  delay(2000);
}