#include <stdio.h>
#include <stdlib.h>

int main() {
	int size = 5;
	int A[size];
	//int size = 5;
	for(int i=0; i<size; i++) {
		printf("\n\tEnter value at A[%d]:: ",i);
		scanf("%d",&A[i]);
	}
	for(int i=0; i<size; i++) {
		printf("\n\tThe value at A[%d]= %d \n\t",i , A[i]);
		
	}
	for(int i=0; i<size-1; i++) {	
		int temp;
		int min;
		int minInd;
		min = A[i];
		minInd = i;
		for(int j=i+1; j<size; j++) {
			if(A[j] < min) {
				min = A[j];
				minInd = j;
			}
		
		}
		temp = A[i];
		A[i] = A[minInd];
		A[minInd] = temp;
	}
	printf("\n\n\tThe Sorted Array is::\n\n\t ");
	for(int i=0; i<size; i++) {
		printf("\n\tThe value at A[%d]= %d \n\t",i , A[i]);
		
	}
	
	return EXIT_SUCCESS;
}