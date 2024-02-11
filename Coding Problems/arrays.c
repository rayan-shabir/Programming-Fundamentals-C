#include <stdio.h>

void printArray(int i[], int size) {
	int i;

	for(i= 0; i<10; i++) {
		printf("\n\tvalue at index %d = %d\n\t" i, j[i]);
	}
}

int main() {
	int g[10]={3, 4, 1, 5, 7, 9, 10, 11, 2, 15} ;
	//g[5]= 1;
	printf("\n\n\tthe value stored at g[5] is = %d\n\n\t", g[5]);
	printArray(g , 12);
	return 0;
}