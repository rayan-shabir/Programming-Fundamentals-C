#include <stdio.h>

void function1 (int j[], int size) {
	for(int i=0; i<size; i++) {
		printf("\n\tArray[%d]=%d\n", i, j[i]);
	}
}


int main () {
	int k[7]={1, 2, 4, 6, 8, 5, 3};
	function1(k, 7);
	return 0;
}
	