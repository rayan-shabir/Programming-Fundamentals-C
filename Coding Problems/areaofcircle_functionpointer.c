#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.142

int Edistance(int x1, int y1, int x2, int y2) {
	int a;
	a = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
	return sqrt(a);
}

float areaofcircle(int x1, int y1, int x2, int y2, int (*fptr)(int , int, int, int)) {
	int a;
	a = pi * fptr(x1, y1, x2, y2);
	return a;
}

int main() {
	int a, b, c, d;
	int (*fptr)(int, int, int, int);
	fptr = &Edistance;
	printf("Enter value x1: \n");
	scanf("%d", &a);
	printf("Enter value y1: \n");
	scanf("%d", &b);
	printf("Enter value x2: \n");
	scanf("%d", &c);
	printf("Enter value y2: \n");
	scanf("%d", &d);
	float e = areaofcircle(a, b, c, d, fptr);
	printf("The area is %.3f", e);
	return 0;
}