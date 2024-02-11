#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int number, guess;
	int nattempt=1;
	srand(time(0));
	number = rand()%100 +1;
	
	//printf("\n\tThe number is %d", number);

	
	do {
		printf("\n\tEnter a number(1-100)::");
		scanf("%d",&guess);

		if(number<guess) {
			printf("\n\tLower Number please!");
			//break;
		} else if(number>guess) {
			printf("\n\tHigher Number please!");
			//break;
		} else {
			printf("\n\tYou guessed it in %d attempts",nattempt);
			break;
		}
		nattempt ++;
	} while ( number != guess);
	return 0;
}

