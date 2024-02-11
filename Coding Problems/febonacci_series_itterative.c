#include <stdio.h>

int itt(int n) {
	int a=0;
	int b=1;
	for(int i=1; i<n; i++) {
		b = a + b;
		a = b - a;
	}
	return a;
}

int main() {
	int n;
	printf("Enter position you want fabonecci number of:: ");
	scanf("%d", &n);
	
	printf("Itterative approach:: f(%d) = %d\n", n, itt(n));
	printf("Recursive approach:: f(%d) = %d\n", n, rec(n));
	return 0;
}