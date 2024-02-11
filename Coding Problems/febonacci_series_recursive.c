#include <stdio.h>


int feben(int n) {
	int f;
	if(n==1) {
		return 0;
	} else if(n==2) {
		return 1;
	}else {
		f = feben(n-1) + feben(n-2);
		return f;
	}
	
}

int main() {
	int n;
	printf("Enter Number::");	
	scanf("%d", &n);

	int c= feben(n);
	printf("%d",c);
	return 0;
}