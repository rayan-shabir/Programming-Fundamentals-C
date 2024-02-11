#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int arr[20][20];

void printchar(char ch, int darr, int rarr) {
	getch();
	system("CLS");
	for(int i=0; i<darr; i++) {
		printf("\n");
	}
	for(int i=0; i<rarr; i++) {
		printf(" ");
	}
	//arr[rarr][darr] = 2;
	printf("%c", ch);
}

void file() {
	FILE *fp = fopen("20by20.txt", "r");
	for(int i=0; i<20; i++) {
		for(int j=0; j<20; j++) {
			fscanf(fp, "%d", &arr[i][j]);
		}
		printpath();
	}
	fclose(fp);
}
void printpath() {
	for (int i=0; i<20; i++) {
		for (int j=0; j<20; j++) {
			if(arr[i][j] == 1) {
				printf("|");
			} else if(arr[i][j] == 0) {
				printf(".");
			} /*else if(arr[i][j] == 2) {
				printf(" ");
			}*/
			printf("  ");
		}
		printf("\n");
	}	
}
int main() {
	char c;
	char move = 'O';
	int rarr = 0;
	int darr = 0;
	printf("%c", move);
	file();
	while(1) {
		c = getch();
		if (c == -32) {
			c = getch();
			if(c == 'H') {
				if(darr != 0) {
					darr --;
				}
			} else if(c == 'P' && arr[darr++][rarr] != 1) {
				darr ++;
			} else if(c == 'M' && arr[darr][rarr++] != 1) {
				rarr ++;
			} else if(c == 'K') {
				if(rarr > 0) {
					rarr --;
				}
			}
		}	
		printchar('O', darr, rarr);
		printpath();
		if (c == 'q') {
			break;
		}	
	}
	return 0;
}