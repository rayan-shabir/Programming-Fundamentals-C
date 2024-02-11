#include <stdio.h>

//function decelaration
int findMid(int a, int b, int c, int d, int e);

/*
following is the definition of function.
following function returns nothing. Hence has void return type.
name of the folowing function is firstfunction
*/

int findMid(int a, int b, int c, int d, int e) {
	if((a < c && b < c && c < d && c < e) || (a < c && d < c && c < b && c < e) || (a < c && e < c && c < b && c < d) || (b < c && d < c && c < a && c < e) || (b < c && e < c && c < a && c < d) || (d < c && e < c && c < a && c < b)) {
	return c;
	}else if((c < a && b < a && a < d && a < e) || (c < a && d < a && a < b && a < e) || (c < a && e < a && a < b && a < d) || (b < a && d < a && a < c && a < e) || (b < a && e < a && a < c && a < d) || (d < a && e < a && a < c && a < b)) {
	return a;
	}else if((c < b && a < b && b < d && b < e) || (c < b && d < b && b < a && b < e) || (c < b && e < b && b < a && b < d) || (a < b && d < b && b < c && b < e) || (a < b && e < b && b < c && b < d) || (d < b && e < b && b < c && b < a)) {
	return b;
	}else if((c < d && a < d && d < b && d < e) || (c < d && b < d && d < a && d < e) || (c < d && e < d && d < a && d < b) || (a < d && b < d && d < c && d < e) || (a < d && e < d && d < c && d < b) || (b < d && e < d && d < c && d < a)) {
	return d;
	}else {
	return e;
}

int main () {
	int a ,b ,c ,d ,e;
	printf("\n\t input a is= \n\t");
	scanf("%d", &a);
	printf("\n\t input b is= \n\t");
	scanf("%d", &b);
	printf("\n\t input c is= \n\t");
	scanf("%d", &c);
	printf("\n\t input d is= \n\t");
	scanf("%d", &d);
	printf("\n\t input e is= \n\t");
	scanf("%d", &e);
	//here function is being called.
	int middle=findMid(a, b, c, d, e);
	findMid(a, b, c, d, e);
	printf("\n middle is=%d \n\n");
	return 0;
}