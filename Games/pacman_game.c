#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int arr[20][20];
int score = 0;
void printpath(char ch, int darr, int rarr) {
	getch();
	system("CLS");
	for (int i=0; i<20; i++) {
		for (int j=0; j<20; j++) {
			if (i == darr && j == rarr) {
				if(arr[i][j] != 1) printf("%c", ch);
				if (arr[i][j] == 0) {
					arr[i][j] = 2;
					score = score +5;
				}
			} else if(arr[i][j] == 1) {
				printf("|");
			} else if(arr[i][j] == 0) {
				printf(".");
			} else  if (arr[i][j] == 2) {
				printf(" ");
			}
			printf("  ");
		}
		printf("\n");
	}
	printf("\n\t\t\tScore = %d", score);
	
}

void filepath() {
	FILE *fp = fopen("20by20.txt", "r");
	for(int i=0; i<20; i++) {
		for(int j=0; j<20; j++) {
			fscanf(fp, "%d", &arr[i][j]);
		}
	}
	printpath('R', -1, -1);
	fclose(fp);
}

int main() {
	char c;
	char move = 'R';
	int rarr = 0;
	int darr = 0;
	printf("%c", move);
	filepath();
	int preR, preC;
	while(1) {
		c = getch();
		preR = darr;
		preC = rarr;
		if (c == -32) {
			c = getch();
			if(c == 'H') {
				
				if(darr != 0) {
					darr --;
				}
			} else if(c == 'P') {
				if (darr < 20) darr ++;
			} else if(c == 'M') {
				if (rarr < 20) rarr ++;
			} else if(c == 'K') {
				if(rarr > 0) {
					rarr --;
				}
			}
			if (arr[darr][rarr] == 1) { 	
				darr = preR;
				rarr = preC;	
			}
			printpath('R', darr, rarr);
		}
		if (c == 'q') {
			break;
		}
			
	}
	return 0;
}