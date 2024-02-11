#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool mybooleanfunction(int age) {
	if(age < 30) {
		return true;
	} 
	return false;
	
}

int main () {
	int age;
	printf("\n\tEnter Your age:: ");
	scanf("%d", &age);
	
	if(mybooleanfunction(age)) {
		printf("\n\tYour are young");
	} else {
		printf("\n\tYour are old");
	}
	return 0;
}