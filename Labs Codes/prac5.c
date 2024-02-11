#include <stdio.h>

int main ( ) { 
	int num;
	printf("\n\tEnter Number =");
	scanf("%d" , &num);

	if(num < 0) {
		printf("\n\t\t%d", -1*num);
	} else if(num > 0) {
		printf("\n\t\t%d", num);
	}
	return 0;
}