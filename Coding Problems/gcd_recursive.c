#include <stdio.h>

int gcd(int n, int m) {
	if(n == 0) 
		return m;
	int r = gcd(m%n, n);
	printf("%d, ", r);
	return r;
}

int main () {
	int r = gcd(12, 27);
	printf("%d, ", r);
	return 0;
}
