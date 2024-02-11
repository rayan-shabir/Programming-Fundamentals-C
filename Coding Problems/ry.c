//include is library in C code.
//name of library is stdio.h
#include <stdio.h>

//decleration of function.
int calculatesum(int i, int j);
float calculatediv(float n, float d);

//defination of function.
int calculatesum(int i, int j) {
	int sum;
	sum= i + j;
	return sum;
}
float calculatediv(float n, float d) {
	return n/d;
}

//following is the main function.
int main () {
	int m=10, n=12;
	float a=1, b=2;
	int sum= calculatesum(m, n);
	float div=calculatediv(a, b);
	printf("\n\n\tsum is=%d\n\n", sum);
	printf("\n\ndiv is=%f\n\n", div);
	return 0;
}