#include <stdio.h>
#include <stdlib.h>

void merge(int A[] ,int asize, int B[], int bsize, int result[]) {
	int aindex = 0;
	int bindex = 0;
	int rindex = 0;
	while(aindex < asize && bindex < bsize) {
		if(A[aindex] < B[bindex]) {
			result[rindex] = A[aindex];
			rindex++;
			aindex++;
		} else {
			result[rindex] = B[bindex];
			rindex++;
			bindex++;
		}
	}
	while(aindex < asize) {
		result[rindex] = A[aindex];
		rindex++;
		aindex++;
	}
	while(bindex < bsize) {
		result[rindex] = B[bindex];
		rindex++;
		bindex++;
	}
}
void print(int C[], int size) {
	for(int i=0; i<size; i++) {
		printf("\n\tThe value at index %d= %d\n\t",i , C[i]);
	}
}
int main() {
	int A[5] = {-1, 0, 9, 97, 99};
	int B[4] = {-99, 0, 91, 92};
	printf("\n\t***Values of array A***\n\t");
	print(A, 5);
	printf("\n\t***Values of array B***\n\t");
	print(B, 4);
	int result[5+4];
	merge(A, 5, B, 4, result);
	printf("\n\t***Values of array result***\n\t");
	print(result, 5+4);
	return EXIT_SUCCESS;
}