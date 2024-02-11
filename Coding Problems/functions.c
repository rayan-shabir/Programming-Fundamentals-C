#include <stdio.h>
//function decelaration
int calculatesum(int i, int j);
float calculatediv(float n, float d);

/*
Following is the defination of function

following functions returns nothing. Hence has void return type.
name of the following function is calculatesum.
*/
int calculatesum(int i , int j) {
	return i+j;
}

float calculatediv(float n, float d) {
	return n/d;
}

int main() {
	int k =5 , l =7;
	float fn =5 , fd =7; 
	//call
	int sum =calculatesum(k, l);
	float div =calculatediv(fn, fd);
	printf("\n sum is =%d, div is =%f\n\n" , sum, div);
	return 0;
 }
