#include <stdio.h>

int main () {
	int i = 0;
	int loopcount = 0;
	while(loopcount < 5) {
		loopcount = loopcount + 1;
		printf("\ntake input i from screen \t");
		scanf("%d", &i);
		if (i > 1 && i <= 5 ) {
			printf("\n\t A \n");
		}else if (i > 5 && i <= 7) {
			printf("\n\t B \n");
		}else {
			printf("\n\t C \n");
		}
		printf("\n\t D \n);
	}
	printf("\n\t Outside of first loop \n");
	for (int floopcount = 0; floopcount < 5; floopcount = floopcount + 1) {
		printf("\ntake input i from screen \t");
		scanf("%d", &i);
		if (i > 1 && i <= 5 ) {
			printf("\n\t A \n");
		}else if (i > 5 && i <= 7) {
			printf("\n\t B \n");
		}else {
			printf("\n\t C \n");
		}
		printf("\n\t D \n);
	}
	return 0;
}