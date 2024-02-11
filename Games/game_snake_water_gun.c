#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char comp, char you) {

	if(comp == you) {
		return 0;
	}
	if(you == 's' && comp == 'g') {
		return -1;
	} else if(you == 'g' && comp == 's') {
		return 1;
	}
	if(you == 'w' && comp == 'g') {
		return 1;
	} else if(you == 'g' && comp == 'w') {
		return -1;
	}
	if(you == 's' && comp =='w') {
		return 1;
	} else if(you =='w' && comp == 's') {
		return -1;
	}
}

int main () {
	char comp;
	char you;
	int num;
	srand(time(0));
	num = rand()%100;
	if(num < 33) {
		comp = 's';
	}else if(num >= 33 && num < 66) {
		comp = 'w';
	}else {
		comp = 'g';
	}
	printf("Enter your choice('s' for snake, 'w' for water', 'g' for gun):: \n");
	scanf("%c", &you);
	int result = game(comp, you);
	printf("You choose %c and comp choose %c\n", you, comp);
	if(result == 0) {
		printf("Draw!\n");
	}else if(result == 1) {
		printf("You Win!\n");
	}else if(result == -1) {
		printf("You Lose!\n");
	}
	
	return 0;
}
