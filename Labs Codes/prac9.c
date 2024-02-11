#include <stdio.h>

int main () {
	char a;
	printf("\n\tEnter Alphabet:");
	scanf("%c", &a);
	
	if (a>=97 && a<=122) {
		printf("\n\tIt is Lowecase");
	} else {
		printf("\n\tIt is not a Lowecase");
	}
	return 0;
}