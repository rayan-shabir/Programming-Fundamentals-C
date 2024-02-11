#include <stdio.h>

int main () {
	char name[50];
	printf("\n\tEnter Your Name:");
	getchar(name);

	putchar("\n\tYour name is %c",name);
	return 0;
}