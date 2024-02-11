#include <stdio.h>

int main() {
	int num;
	int a;
	int reverse;
	printf("\n\tPlease Enter Number");
	scanf("%d", &num);
	a = num;
	reverse = 0;

	while( num != 0) {
		reverse =reverse *10 + num % 10;
		
		num = num /10;
	}
	
	printf("\n\t%d", reverse);
	

	if(reverse == a) {
		printf("\n\tIt is pendulum");
	} else {
		printf("\n\tIt is not pendulum");
	}
	return 0;
}