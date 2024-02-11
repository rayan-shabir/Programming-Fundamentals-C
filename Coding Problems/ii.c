#include <stdio.h>

int findIndex(int B[], int size, int x) {
	for(int i=0; i<size; i++) {
		if(B[i] > x) {
			return i;
		}
	}
	return size;
}
int main() {
	int x;
	int size = 10;
	int A[size];
	printf("\n\tPlease Enter array:: ");
	for(int i=0; i<9; i++) {
		printf("\n\tEnter value at A[%d]:: ",i);
		scanf("%d", &A[i]);
		if(A[i+1] < A[i]) {
			printf("\n\tERROR");
			break;
		}
	}

	printf("\n\tEnter x:: ");
	scanf("%d", &x);
	int loc = findIndex(A, 10, x);
	printf("\n\tThe location to print x is index=%d", loc);	
	return 0;
}