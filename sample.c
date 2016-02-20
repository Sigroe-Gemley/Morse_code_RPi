// sample.c
#include "morsecode.h"
#include <stdio.h>
#include <string.h>

int main() {
	setgpiopin(1); // Set the GPIO pin to GPIO_GEN1.
	makecommands(); // Make the commands ledon and ledoff for use with blinkdot() and blinkdash() functions.
	
	int number1 = 456; // Define and initialize the variable "number1" for use with the blinknumber(int num, int length) function.
	blinknumber(number1, 3); // Blink the numbers in the variable "number1". Note that you have to input the length (number of digits) as second argument.
	
	char str[25] = "ABCabc"; // Define and intialize the character array "str".
	blinkstring(str); // Blink the characters in the array, which are in this case "ABCabc". Note that the length of the array is not required, as the function resolves this itself.
	
	return 0;
}
