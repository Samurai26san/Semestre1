#include<Servo.h>
Servo servoMotor;
int X=0;
void setup() {
  Serial.begin(9600);
  servoMotor.attach(9);
}

void loop() {
  servoMotor.write(1);
  for (X = 0; X <= 180; X += 10){
    servoMotor.write(X);
    Serial.print ("El motor se encuentra actualmente en " );
    Serial.println (X);
    delay(300);
    }
  for (X = 180; X >= 0; X-= 10){
    servoMotor.write(X);
    Serial.print ("El motor se encuentra actualmente en " );
    Serial.println (X);
    delay(300);
    }
}
