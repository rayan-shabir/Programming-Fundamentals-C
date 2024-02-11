#include <stdio.h>

int main () {
	int a;
	int tax =0;
	printf("\n\tEnter Your Income::");
	scanf("%d", &a);
	
	
	if(a>=250000 && a<=500000) {
		tax = tax +0.05*(a-250000);
		printf("\n\tYour TAX for income:%d, is=%d",a ,tax);
	} else if (a>500000 && a<=1000000) {
		tax = tax +0.20*(a-500000);
		printf("\n\tYour TAX for income:%d, is=%d",a ,tax);
	} else if (a>1000000) {
		tax = tax +0.30*(a-1000000);
		printf("\n\tYour TAX for income:%d, is=%d",a ,tax);
	} else {
		printf("\n\tYour TAX for income:%d, is=0",a );
	}
	return 0;
}	