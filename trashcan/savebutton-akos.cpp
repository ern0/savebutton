#include <Arduino.h>
#include <Keyboard.h>

const int  buttonPin = 0;    // the pin that the pushbutton is attached to
const int ledPin = 13;       // the pin that the LED is attached to
const int osPin = 1;
char ctrlKey = KEY_LEFT_CTRL;

void setup() {

	pinMode(ledPin,OUTPUT);
	pinMode(buttonPin,INPUT);
	pinMode(osPin,INPUT);

	digitalWrite(ledPin, HIGH);

	if(digitalRead(osPin) == HIGH){
		char ctrlKey = KEY_LEFT_GUI;
	}

	Keyboard.begin();

	for(int i=0;i<5;i++){
		digitalWrite(ledPin, HIGH);
		delay(200);
		digitalWrite(ledPin, LOW);
		delay(200);
	}

} // setup()


void loop() {

	while (digitalRead(buttonPin) == HIGH) {
		delay(500);
	}
	Keyboard.press('s');
	Keyboard.press(ctrlKey);

	digitalWrite(13,HIGH);
	delay(100);
	Keyboard.releaseAll();
	delay(1500);
	digitalWrite(13,LOW);
	delay(100);
} // loop()
