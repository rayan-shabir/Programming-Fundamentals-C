#include <stdio.h>

int sum(int a, int b) {
	return a+b;
	a = 11;
	b = 171;
}

int main () {
	int x=5;
	int y=7;
	printf("\n\tThe value of x=%d and y=%d", x, y);
	
	printf("\n\tThe sum of %d+%d = %d", x, y, sum(x, y));

	 //x and y remains unchanged because here values are only pass by copy.
	printf("\n\tThe value of x=%d and y=%d", x, y);

	return 0;
}