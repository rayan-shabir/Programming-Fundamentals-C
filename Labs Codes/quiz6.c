#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void outputch(char a, int r, int d)
 {
	system("clear");
	for(int j=0; j<d; j++) {
		printf("\n");
	}
	for(int j=0; j<r; j++) {
		printf("\t");
	}
	printf("%c", a);
}

char a;
int main () 
{
	char start = 'S';
	int right, down = 0;

	printf("%c", start);
	while(1) {
		a = getch();
		if(a == -32) {
		a = getch();
		if(a == 77) {
			right++;
		}
		if(a == 75) {
			if(right != 0) {
				right--;
			}
		}
			if(a == 72) {
				if(down == 0) {
					break;
				}
				down--;
			}
			if(a == 80) {
				down++;
			}
			outputch('S', right, down);
		}
	}
	return EXIT_SUCCESS;
}
