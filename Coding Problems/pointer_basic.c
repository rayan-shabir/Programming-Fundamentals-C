#include <stdio.h>

int main() {
	int a= 8;
	int *ptr;
	ptr = &a;
	
	printf("\n\tThe value of a is %d", a);
	printf("\n\tThe value of a is %d", *ptr);
	printf("\n\tThe adress of a is %p", &a);
	printf("\n\tThe adress of a is %p", ptr);
	printf("\n\tThe adress of ptr is %p", &ptr);
	printf("\n\tThe value of ptr is %d", *(&ptr));
	return 0;
}