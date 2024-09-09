#include <Servo.h>
#define pot A5

Servo myServo;
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial)
  {
    ;
  }
  myServo.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(Read(pot));
  myServo.write(Read(pot));
}

int Read(int pot)
{
  int value = map(analogRead(pot),0,1024,0,180);
  return value;
}
