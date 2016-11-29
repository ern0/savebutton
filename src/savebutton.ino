#include <Arduino.h>

# define PIN (0)

void setup() {
	pinMode(PIN,OUTPUT);
}

void loop() {
	digitalWrite(PIN,HIGH);
	delay(100);	
	digitalWrite(PIN,LOW);
	delay(900);
}
