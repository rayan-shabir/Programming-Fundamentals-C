#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void printchar(char ch, int darr, int rarr) {
	getch();
	system("CLS");
	for(int i=0; i<darr; i++) {
		printf("\n");
	}
	for(int i=0; i<rarr; i++) {
		printf(" ");
	}
	printf("%c", ch);
}

int main () {
	char c;
	char move = 'R';
	int rarr = 0;
	int darr = 0;
	printf("%c", move);
	while(1) {
		c = getch();
		if (c == -32) {
			c = getch();
			if(c == 'H') {
				if(darr != 0) {
					darr --;
				}
			} else if(c == 'P') {
				darr ++;
			} else if(c == 'M') {
				rarr ++;
			} else if(c == 'K') {
				if(rarr > 0) {
					rarr --;
				}
			}	
		printchar('R', darr, rarr);
		}
		if (c == 'q') {
			break;
		}
		
	}
	return 0;
}