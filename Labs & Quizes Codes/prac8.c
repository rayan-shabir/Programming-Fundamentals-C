//WRITE A PROGRAM TO FIND LENGTH OF A NUMBER

#include <stdio.h>


int main() {
	int a=0, n;
	printf("Input Number=");
	scanf("%d",&n);
	while(n > 0) {
		n=n/10;
		a++;
	}
	printf("Your number has %d digits",a);
	return 0;
}