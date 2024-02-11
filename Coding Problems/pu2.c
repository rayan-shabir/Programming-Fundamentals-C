#include <stdio.h>


int main () {
	int n;
	printf("\n\tGive number::");
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		printf("\n\t%d", i+1);
	}
	return 0;
}	