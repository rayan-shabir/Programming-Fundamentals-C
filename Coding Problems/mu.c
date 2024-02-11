#include <stdio.h>



int main () {
	int a[4];
	int b;
	int i;
	for(i=0; i<4; i++) {
		printf("\n\tInput number at index:%d, =",i);
		scanf("%d",&a[i]);
	}
	//giveNum(a);
	printf("\n\tGive number::");
	scanf("%d",&b);
	int count = 0;
	for(int j=0; j<4; j++) {
		if( b ==a[j]) {
			printf("\n\tExist the number: %d, at index: %d",b ,j);
			count++;
		} 
	}
	if(count == 0) {
		printf("\n\tdoesn't Exist");
	} 
	
	return 0;
}	