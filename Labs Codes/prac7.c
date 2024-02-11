#include <stdio.h>

int main() {
	int num;
	printf("\n\tEnter Number(1-10)=");
	scanf("%d", &num);
	
	if(num == 1) {
		printf("One");
	} else if(num % 2 ==0) {
		printf("\n\tNumber is Even");
	
	} else {
		printf("\n\tNumber is odd");
	}
	return 0;
}