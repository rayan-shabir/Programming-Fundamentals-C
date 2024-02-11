#include <stdio.h>

int main() {
	float f = 1;
	int n;
	printf("Enter Number you want factorial of: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		f = f * i;
	}
	printf("The factorial of %d is %.2f",n,  f);
	return 0;
}