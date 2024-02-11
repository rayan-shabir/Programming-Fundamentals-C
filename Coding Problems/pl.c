#include <stdio.h>

int main () {
	int a[3];
	int mult=1;

	for(int i=0; i<3; i++) {
		printf("\n\tEnter number at index,%d=",i);
		scanf("%d",&a[i]);
		mult = mult*a[i];
	}
	printf("\n\tThe multiplaction is=%d" ,mult);
	
	return 0;
}