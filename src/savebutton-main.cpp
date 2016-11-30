#include <Arduino.h>


void keyboardSetup();
void keyboardSendSave();

# define MODKEY_CONTROL 1
# define MODKEY_COMMAND 2

// @global
char modkey = MODKEY_CONTROL;


void setup() {
	keyboardSetup();	
}

void loop() {
	keyboardSendSave();
	delay(5000);
}