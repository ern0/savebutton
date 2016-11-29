#include <Arduino.h>
#include <Keyboard.h>

void setup() {

	pinMode(13,OUTPUT);
	Keyboard.begin();

} // setup()


void loop() {

	Keyboard.press('x');

	digitalWrite(13,HIGH);
	delay(100);

	Keyboard.releaseAll();

	digitalWrite(13,LOW);
	delay(3900);

} // loop()
