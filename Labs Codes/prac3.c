#include <stdio.h>

int main() {
	int A, B;
	printf("\n\tEnter Value of A="); //input A
	scanf("%d", &A);

	printf("\n\tEnter Value of B="); //input B
	scanf("%d", &B);
	
	if(A % B == 0) {
		printf("\n\tDivisible");
	} else {
		printf("\n\tNot Divisible");
	}
	return 0;
}