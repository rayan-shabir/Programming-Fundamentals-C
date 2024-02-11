#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) {
	return a+b;
}

int main() {
	int *(fptr)(int, int);
	fptr = &sum;
	int d = (*fptr)(7, 8);

	printf("d is %d\n", d);
	return 0;
}