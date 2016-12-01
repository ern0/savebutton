#include <Arduino.h>

# ifndef _savebutton_hpp
# define _savebutton_hpp

// ---- platform-specific constants -------------------------------

# if ENV == 1
# include "savebutton-pinout-leonardo.hpp"
# endif

# if ENV == 2
# include "savebutton-pinout-digispark.hpp"
# endif


// ---- platform-specific functions -------------------------------

extern void keyboardSetup();
extern void keyboardSendSave();


// ---- common constants ------------------------------------------

# define MODKEY_CONTROL 1
# define MODKEY_COMMAND 2


// ---- common function -------------------------------------------

extern char getModKey();

# endif