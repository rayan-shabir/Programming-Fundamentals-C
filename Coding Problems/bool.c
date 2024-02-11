#include <stdio.h>
#include <stdbool.h>

bool mybooleanfunction(int num1,int num2) {
	if(num1 % num2 == 0) {
		return true;
	}
	return false;
}

int main() {
	int num1, num2;
	printf("\n\tEnter Number 1 and Number 2:: ");
	scanf("%d %d", &num1 , &num2);
	
	if(mybooleanfunction(num1, num2)) {
		printf("\n\tNumber are divisible");
	} else {
		printf("\n\tNumber are not divisible");
	}
	return 0;
}