/* Morse code C header file for Raspberry Pi to use with LEDs.
Currently, GPIO_GEN pins (for example GPIO_GEN1) are working with this library.
Using system() function for setting GPIO_GEN pin and blinking led.
One unit is 0.5 seconds, so a dot equals 0.5 seconds and a dash equals 1.5 seconds (3u).
A pause is 1 second long and a pause between individual characters is 1.5 seconds long.
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int pin;

int setgpiopin (int pinnum){
    char setpin[50];
	sprintf(setpin, "gpio mode %d out", pinnum);
    system(setpin);
    pin = pinnum;
    return 0;
}

char ledon[50];
char ledoff[50];

int makecommands() {
	sprintf(ledon, "gpio write %d 1", pin);
    sprintf(ledoff, "gpio write %d 0", pin);
    return 0;
}

int blinkt(int time) {
	system(ledon);
	sleep(time);
	system(ledoff);
    return 0;
}

int blinkdot() {
	system(ledon);
	sleep(0.5);
	system(ledoff);
	sleep(1);
	return 0;
}

int blinkdash() {
	system(ledon);
	sleep(1.5);
	system(ledoff);
	sleep(1);
	return 0;
}

int blink1() {
	blinkdot();
	blinkdash();
	blinkdash();
	blinkdash();        
	sleep(1.5);
	return 0;
}

int blink2() {
	blinkdot();
    blinkdot();
	blinkdash();
	blinkdash();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blink3() {
	blinkdot();
	blinkdot();
	blinkdot();
	blinkdash();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blink4() {
	blinkdot();
	blinkdot();
	blinkdot();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blink5() {
	int c = 0;
	while (c != 5) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blink6() {
	blinkdash();
	int c = 0;
	while (c != 4) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blink7() {
	blinkdash();
	blinkdash();
	int c = 0;
	while (c != 3) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blink8() {
	blinkdash();
	blinkdash();
	blinkdash();
	blinkdot();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blink9() {
	int c = 0;
	while (c != 4) {
		blinkdash();
		c++;
	}
	blinkdot();
	sleep(1.5);
	return 0;
}

int blink0() {
	int c = 0;
	while (c != 5) {
			blinkdash();
			c++;
	}
	sleep(1.5);
	return 0;
}

int blinkperiod() {
	blinkdot();
	blinkdash();
	blinkdot();
	blinkdash();
	blinkdot();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinknumber(int num, int length) {
	int digits[length];
	int count = length;
    while (count > 0) {             // Take the digits of the given integer and transfer them into an array. The user-given length combined with for-loop-style while loops are used to achieve this.
		int digit = num % 10;
		digits[count] = digit;
		num /= 10;
		count--;
	}

	int c = 0;
	while (c <= length) {           // Compare c (location in the array) to the user-given length.
		if(digits[c] == 1) {    // If statements to compare and, after comparison, blink the corresponding digits found in the array.
			blink1();
		}
		if(digits[c] == 2) {
			blink2();
		}
		if(digits[c] == 3) {
			blink3();
		}
		if(digits[c] == 4) {
			blink4();
		}
		if(digits[c] == 5) {
			blink5();
		}
		if(digits[c] == 6) {
			blink6();
		}
		if(digits[c] == 7) {
			blink7();
		}
		if(digits[c] == 8) {
			blink8();
		}
		if(digits[c] == 9) {
			blink9();
		}
		c++;
    }

        return 0;
}

