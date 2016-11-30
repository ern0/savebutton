#include "savebutton.hpp"


char modkey = MODKEY_CONTROL;


void setup() {

	pinMode(PIN_LED_ONBOARD,OUTPUT);
	if (PIN_LED_BUTTON > -1) pinMode(PIN_LED_BUTTON,OUTPUT);
	pinMode(PIN_BUTTON,INPUT);
	pinMode(PIN_OS,INPUT);

	if (digitalRead(PIN_OS) == PINSTATE_OS_CLOSE) {
		modkey = MODKEY_COMMAND;
	}

	// startup lights

	for (int i = 0; i < 5; i++) {
		digitalWrite(PIN_LED_ONBOARD,HIGH);
		delay(300);
		digitalWrite(PIN_LED_ONBOARD,LOW);
		delay(300);
	}
	if (PIN_LED_BUTTON > -1) {
		digitalWrite(PIN_LED_BUTTON,HIGH);
		delay(500);
		digitalWrite(PIN_LED_BUTTON,LOW);
	}

	keyboardSetup();	

} // setup()


void loop() {

	while (digitalRead(PIN_BUTTON) != PINSTATE_BUTTON_CLOSE) {
		delay(500);
	}

	keyboardSendSave();

	digitalWrite(PIN_LED_BUTTON,HIGH);
	delay(800);
	digitalWrite(PIN_LED_BUTTON,LOW);

} // loop()
