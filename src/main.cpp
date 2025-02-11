#include <Arduino.h>

const int ledmerah = 8;
const int ledkuning = 9;
const int ledhijau = 10;



void setup() {
  // put your setup code here, to run once:
pinMode(ledmerah, OUTPUT);
pinMode(ledkuning, OUTPUT);
pinMode(ledhijau, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledmerah, HIGH);
delay(5000);
digitalWrite(ledmerah, LOW);


digitalWrite(ledkuning, HIGH);
delay(1000);
digitalWrite(ledkuning, LOW);


digitalWrite(ledhijau, HIGH);
delay(5000);
digitalWrite(ledhijau, LOW);

digitalWrite(ledkuning, HIGH);
delay(1000);
digitalWrite(ledkuning, LOW);

}



