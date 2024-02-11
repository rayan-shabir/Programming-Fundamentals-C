#include <stdio.h>

int fact(int n) {
	if(n == 0 || n == 1) {
		return 1;
	}
	return n * fact(n-1);
}
int main() {
	int n;
	printf("Enter Number you want factorial of: ");
	scanf("%d", &n);
	float f = fact(n);
	printf("The factorial of %d is %.2f",n,  f);
	return 0;
}
