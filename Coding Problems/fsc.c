//include is library in C code.
//name of library is stdio.h
#include <stdio.h>

//decleration of function.
int calculatesum(int i, int j);
float calculatediv(float n, float d);

//defination of function.
int calculatesum(int i, int j) {
	//sum is variable of data type int.
	int sum;
	sum = i + j;
	return sum;
}
float calculatediv(float n, float d) {
	float div;
	div= n/d;
	return div;
}

//following is main function.
int main () {
	int k=5, l=7;
	float f1=5, f2=7;
	int sum= calculatesum(k, l);
	float div= calculatediv(f1, f2);
	printf("\n\n\tsum is=%d,div is=%f\n\n", sum, div);
	return 0;
}