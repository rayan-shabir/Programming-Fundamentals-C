#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void printpacman(char pacman, int darrow, int rarrow) {
	getch();
	system("CLS");
	for(int i=0; i<darrow; i++) {
		printf("\n");
	}
	for(int i=0; i<rarrow; i++) {
		printf(" ");
	}
	printf("%c", pacman);
}

int main () {
	char ch;
	char pacman = 'C';
	int rarrow = 0;
	int darrow = 0;
	printf("%c",pacman);
	while(1) {
		ch = getch();
		//printf("\n\tChar entered %c has ASCII %d", ch, ch);
		if(ch == -32) {
			ch = getch();
			if(ch == 'H') {
				if(darrow != 0) 
					darrow --;
			}else if(ch == 'P') {
				darrow ++;
			}else if(ch == 'M') {
				rarrow ++;
			} else if(ch == 'K') {
				if(rarrow > 0) {
					rarrow --;
				}
			} 
		printpacman('C', darrow, rarrow);
		}
		if(ch == 'q') {
			break;
		}
		
	}
	return EXIT_SUCCESS;
}
