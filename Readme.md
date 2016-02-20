C morse code header file for use with the Raspberry Pi GPIO Pins.
For a complete tutorial which also includes circuit schematics and the like, have a look at my instructable: http://www.instructables.com/id/Morse-Code-Using-Raspberry-Pi-and-LED 

Features:
- Blink the Latin Alphabet with blinkstring(char *string) function
- Blink numbers with blinknumber(int number, int length) function
- Dots and dashes are easily distinguishable
- Blink dots or dashes
- blinknumber(int number, int length) automatically extracts the digits of your integer, so it can blink the individual digits.

Upcoming Features:
- Obtain length of int number inside the function, without user input.