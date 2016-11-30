#include <Arduino.h>

// ---- platform-specific functions -------------------------------

extern void keyboardSetup();
extern void keyboardSendSave();


// ---- platform-specific constants -------------------------------

# if ENV == digispark
	# define PIN_BUTTON (0)
	# define PIN_OS (1)
	# define PINSTATE_OS_CLOSE (HIGH)
	# define PIN_LED_ONBOARD (13)
	# define PIN_LED_BUTTON (-1)
# endif

# if ENV == leonardo
	# define PIN_BUTTON (1)
	# define PINSTATE_BUTTON_CLOSE (HIGH)
	# define PIN_OS (5)
	# define PINSTATE_OS_CLOSE (HIGH)
	# define PIN_LED_ONBOARD (13)
	# define PIN_LED_BUTTON (2)
# endif


// ---- common constants ------------------------------------------

# define MODKEY_CONTROL 1
# define MODKEY_COMMAND 2


// ---- global variables ------------------------------------------

extern char modkey;
