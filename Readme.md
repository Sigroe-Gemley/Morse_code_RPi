C morse code header file for use with the Raspberry Pi GPIO Pins.

Features:
- Blink the Latin Alphabet and numbers with blinkstring(char *string) function
- Blink numbers with blinknumber(int number, int length) function
- Dots and dashes are easily distinguishable
- Blink dots or dashes
- blinknumber(int number, int length) automatically extracts the digits of your integer, so it can blink the individual digits.

To be implemented:
- Obtain length of int number inside the function, without user input.