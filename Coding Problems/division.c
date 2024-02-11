#include <stdio.h>

// y/x

int qandr (int x, int y, int *q, int *r) {
	if(x == 0) {
		return 1; //faiure
	}
	
	*q = y/x;
	*r = y%x;

	return 0; //success
}

int main () {
	int qu, re;
	int a, b;
	printf("\n\tEnter value of a: ");
	scanf("%d", &a);
	printf("\n\tEnter value of b: ");
	scanf("%d", &b);
	qandr (a, b, &qu, &re);

	if(qandr (a, b, &qu, &re) == 1) {
		printf("\n\tInvalid Input");
		return 1; //Exit with failure
	}
	printf("\n\tThe quotation is %d", qu);
	printf("\n\tThe remainder is %d", re);
	
	return 0;
}
