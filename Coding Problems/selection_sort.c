#include <stdio.h>
	

int main() {
	int min, minInd, temp;
	int A[5] = {5, 4, 3, 2, 1};
	for(int i=0; i<5-1; i++) {
		min = A[i];
		for(int j=i+1; j<5; j++) {
			if(A[j] < min) {
				min = A[j];
				minInd = j;
			}
		}
		temp = A[i];
		A[i] = A[minInd];
		A[minInd] = temp;
	}
	
	for(int i=0; i<5; i++) {
		printf("\n\tThe value at A[%d]=%d ", i, A[i]);
	}
	return 0;
}