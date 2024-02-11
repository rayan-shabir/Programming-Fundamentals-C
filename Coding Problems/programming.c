//include is a library in C code.
//name of library is stdio.h.
#include <stdio.h>

//declaration of function.
void firstfunction();

//defination of funcion.
void firstfunction() {
	printf("\n\n\tMY NAME IS RAYAN\n\n");
}

//following is main function.
int main() {
	//sum is variable of data type integer.
	//scope of sum is function main.
	int sum;
	int i, j;
	i =10;
	sum=i + 70;
	printf("\n\n\tsum is =%d\n\n", sum);
	//here function is being called.
	firstfunction();
	return 0;
}


	