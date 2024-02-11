#include <stdio.h>

int main () {
	int i =5;
	int *j;
	j = &i;
	//print size of pointer on ur machine.
	printf("\n\tThe size of pointer = %ld", sizeof(j));

	printf("\n\tThe value of i =%d", i);
	printf("\n\tThe value of i =%d", *j);
	printf("\n\tThe adress of i =%p", &i);
	printf("\n\tThe adress of i =%p", j);
	printf("\n\tThe adress of j =%p", &j);
	
	*j = 9; //both i and j value will changed.

	printf("\n\t\n\n");

	printf("\n\tThe value of i =%d", i);
	printf("\n\tThe value of i =%d", *j);
	printf("\n\tThe adress of i =%p", &i);
	printf("\n\tThe adress of i =%p", j);

	return 0;
}