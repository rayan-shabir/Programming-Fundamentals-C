#include <stdio.h>

int main () {
	int num;
	printf("\n\tEnter Number=");
	scanf("%d", &num);
	
	for(int cons = 1; cons < 11; cons ++) {
		printf("\n\t%d * %d = %d", num , cons , num*cons);
	}
	return 0;
}