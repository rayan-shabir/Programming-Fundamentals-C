#include <stdio.h>

void printPattern(int x) {
	if(x==1) {
		printf("*\n");
		return;
	}
	printPattern(x-1);
	for(int i=0;i<2*x-1;i++) {
		printf("*");
	}
	printf("\n");
}


int main() {
	int n;
	printf("\n\tEnter Number of lines::");
	scanf("%d",&n);

	printPattern(n);
	return 0;
}