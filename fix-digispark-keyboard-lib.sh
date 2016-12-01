#!/bin/bash

F=~/.platformio/packages/framework-arduinoavr/libraries/__cores__/digispark/DigisparkKeyboard/usbdrvasm.asm

echo deleting unnecessary file: $F
rm -rf $F
