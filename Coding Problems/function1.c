#include <stdio.h>

//function decelaration
int calculatesum(int i, int j);

/*
following is the definition of function.
following function returns nothing. Hence has void return type.
name of the folowing function is firstfunction
*/
int calculatesum(int i, int j) {
	int sum;
	sum=i + j;
	return sum;
}
int main () {
	//definition: sum is a variable of data type integer.
	//scope of sum is function main.
	int sum;
	int i, j;
	i=10;
	sum = i + 70;
	printf("sum is= %d of %d" , sum, i);
	//here function is being called.
	calculatesum();
	return 0;
}