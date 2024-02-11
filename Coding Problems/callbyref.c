#include <stdio.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void wrong_swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int x=4;
	int y=9;
	printf("\n\tBefore swap x and y is %d and %d",x , y);

	wrong_swap(x, y);//x and y will not swap.
	printf("\n\tAfter swap x and y is %d and %d",x , y);
	
	swap(&x, &y);//x and y will swap.
	printf("\n\tAfter swap x and y is %d and %d",x , y);
	return 0;
}