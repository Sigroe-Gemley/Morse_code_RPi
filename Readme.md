C morse code header file for use with the Raspberry Pi GPIO Pins.
For a complete tutorial which also includes circuit schematics and the like, have a look at my instructable: http://www.instructables.com/id/Morse-Code-Using-Raspberry-Pi-and-LED 

Features:
- Blink numbers
- Blink dots or dashes
- blinknumber(int number, int length) automatically extracts the digits of your integer, so it can blink the individual digits.
- You can, for example, blink IP addresses at startup by using the blinknumber(int num, int length) and blinkperiod() functions.

To be implemented:
- Blink the Latin Alphabet (A, B etc.)
- Obtain length of int number inside the function, without user input.
