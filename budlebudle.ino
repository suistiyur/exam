#include <Servo.h>

Servo gs;
int pm = A0;
int shaft;

void setup() {
  gs.attach(3);
  Serial.begin(9600);
  pinMode(pm,INPUT);
}

void loop() {
  shaft = analogRead(pm);
  shaft = map(shaft,0,1023,0,179);
  Serial.println(shaft);
  gs.write(shaft);
  delay(20);
}