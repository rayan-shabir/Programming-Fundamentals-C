#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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
	//char ch;
	//char pacman = 'O';
	int rarrow = 0;
	int darrow = 0;
	printf("O");
	while(1) {
		char ch = getch();
		//printf("\n\tChar entered %c has ASCII %d", ch, ch);
		if ( ch == -32) {
			//printf("\n\n\t Some arrow key is pressed");
			char arrowkey = getch();
			if(arrowkey == 'H') {
				//printf("\n\n\t UP");
				if(darrow != 0) {
					darrow--;
				}
			} else if(arrowkey== 'P') {
				//printf("\n\n\t DOWN");
				darrow ++;
			} else if(arrowkey == 'M') {
				//printf("\n\n\t RIGHT");
				rarrow ++;
			} else if(arrowkey == 'K') {
				//printf("\n\n\t LEFT");
				if(rarrow > 0) {
					rarrow--;
				}
			}	
		printpacman('O', darrow, rarrow);
		}
		if (ch == 'q') {
			break;
		}
		
	}
	return EXIT_SUCCESS;
}