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

int blinkA() {
	blinkdot();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkB() {
	blinkdash();
	int c = 0;
	while(c != 3) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkC() {
	blinkdash();
	blinkdot();
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkD() {
	blinkdash();
	blinkdot();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkE() {
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkF() {
	blinkdot();
	blinkdot();
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkG() {
	blinkdash();
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkH() {
	int c = 0;
	while (c != 4) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkI() {
	blinkdot();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkJ() {
	blinkdot();
	int c = 0;
	while (c != 3) {
		blinkdash();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkK() {
	blinkdash();
	blinkdot();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkL(){
	blinkdot();
	blinkdash();
	blinkdot();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkM() {
	int c = 0;
	while (c != 2) {
		blinkdash();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkN() {
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkO() {
	int c = 0;
	while (c != 3) {
		blinkdash();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkP() {
	blinkdot();
	blinkdash();
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkQ() {
	int c = 0;
	while (c != 2) {
		blinkdash();
		c++;
	}
	blinkdot();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkR() {
	blinkdot();
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkS() {
	int c = 0;
	while (c != 3) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkT() {
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkU() {
	int c = 0;
	while (c != 2) {
		blinkdot();
		c++;
	}
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkV() {
	int c = 0;
	while (c != 3) {
		blinkdot();
		c++;
	}
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkW() {
	blinkdot();
	blinkdash();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkX() {
	blinkdash();
	blinkdot();
	blinkdot();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkY() {
	blinkdash();
	blinkdot();
	blinkdash();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkZ() {
	int c = 0;
	while (c != 2) {
		blinkdash();
		c++;
	}
	blinkdot();
	blinkdot();
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

int blinkstring(char * string) { // Blink a character array (string)
	int length = strlen(string);
	int count = 0;
	while (count <= length) {
		if (string[count] == 'A') {
			blinkA();
		}
		if (string[count] == 'B') {
			blinkB();
		}
		if (string[count] == 'C') {
			blinkC();
		}
		if (string[count] == 'D') {
			blinkD();
		}
		if (string[count] == 'E') {
			blinkE();
		}
		if (string[count] == 'F') {
			blinkF();
		}
		if (string[count] == 'G') {
			blinkG();
		}
		if (string[count] == 'H') {
			blinkH();
		}
		if (string[count] == 'I') {
			blinkI();
		}
		if (string[count] == 'J') {
			blinkJ();
		}
		if (string[count] == 'K') {
			blinkK();
		}
		if (string[count] == 'L') {
			blinkL();
		}
		if (string[count] == 'M') {
			blinkM();
		}
		if (string[count] == 'N') {
			blinkN();
		}
		if (string[count] == 'O') {
			blinkO();
		}
		if (string[count] == 'P') {
			blinkP();
		}
		if (string[count] == 'Q') {
			blinkQ();
		}
		if (string[count] == 'R') {
			blinkR();
		}
		if (string[count] == 'S') {
			blinkS();
		}
		if (string[count] == 'T') {
			blinkT();
		}
		if (string[count] == 'U') {
			blinkU();
		}
		if (string[count] == 'V') {
			blinkV();
		}
		if (string[count] == 'W') {
			blinkW();
		}
		if (string[count] == 'X') {
			blinkX();
		}
		if (string[count] == 'Y') {
			blinkY();
		}
		if (string[count] == 'Z') {
			blinkZ();
		}
		if (string[count] == 'a') {
			blinkA();
		}
		if (string[count] == 'b') {
			blinkB();
		}
		if (string[count] == 'c') {
			blinkC();
		}
		if (string[count] == 'd') {
			blinkD();
		}
		if (string[count] == 'e') {
			blinkE();
		}
		if (string[count] == 'f') {
			blinkF();
		}
		if (string[count] == 'g') {
			blinkG();
		}
		if (string[count] == 'h') {
			blinkH();
		}
		if (string[count] == 'i') {
			blinkI();
		}
		if (string[count] == 'j') {
			blinkJ();
		}
		if (string[count] == 'k') {
			blinkK();
		}
		if (string[count] == 'l') {
			blinkL();
		}
		if (string[count] == 'm') {
			blinkM();
		}
		if (string[count] == 'n') {
			blinkN();
		}
		if (string[count] == 'o') {
			blinkO();
		}
		if (string[count] == 'p') {
			blinkP();
		}
		if (string[count] == 'q') {
			blinkQ();
		}
		if (string[count] == 'r') {
			blinkR();
		}
		if (string[count] == 's') {
			blinkS();
		}
		if (string[count] == 't') {
			blinkT();
		}
		if (string[count] == 'u') {
			blinkU();
		}
		if (string[count] == 'v') {
			blinkV();
		}
		if (string[count] == 'w') {
			blinkW();
		}
		if (string[count] == 'x') {
			blinkX();
		}
		if (string[count] == 'y') {
			blinkY();
		}
		if (string[count] == 'z') {
			blinkZ();
		}
		if (string[count] == '.') {
			blinkperiod();
		}
		if(string[count] == '1') {
			blink1();
		}
		if(string[count] == '2') {
			blink2();
		}
		if(string[count] == '3') {
			blink3();
		}
		if(string[count] == '4') {
			blink4();
		}
		if(string[count] == '5') {
			blink5();
		}
		if(string[count] == '6') {
			blink6();
		}
		if(string[count] == '7') {
			blink7();
		}
		if(string[count] == '8') {
			blink8();
		}
		if(string[count] == '9') {
			blink9();
		}
		count++;
	}
	return 0;
}
