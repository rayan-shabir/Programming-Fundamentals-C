#include <stdio.h>

void rect_print(int n) {
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void rev_print(int n) {
	for(int i=0; i<n; i++) {
		for(int j=n; j>i; j--) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	int n, m;
	printf("***Enter 0 for rectangular star pattern , and 1 for reverse rectangular star pattern***\n");
	scanf("%d", &n);
	printf("Enter number of lines you wanted star pattern of:: ");
	scanf("%d", &m);

	if(n==0) {
		rect_print(m);
	}else if(n==1) {
		rev_print(m);
	}
	return 0;
}