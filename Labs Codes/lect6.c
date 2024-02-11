#include <stdio.h>
#include <stdlib.h>

int canMultiply(int arows, int acols, int brows, int bcols ) {
	if(acols != brows) {
		return EXIT_FAILURE;
	} else {
		printf("\n\tDimensions are correct");
		return EXIT_SUCCESS;
	}
}

int main() {
	int arows, acols, brows, bcols;
	printf("\n\tEnter dimension for A=[rows=");
	scanf("%d", &arows);
	printf("\t,cols=");
	scanf("%d", &acols);
	printf("\t]\n");

	printf("\n\tEnter dimension for B=[rows=");
	scanf("%d", &brows);
	printf("\t,cols=");
	scanf("%d", &bcols);
	printf("\t]\n");
	int ret = canMultiply(arows, acols, brows, bcols);
	if(ret == EXIT_FAILURE) {
		printf("Dimensions are inncorrect");
		return EXIT_FAILURE;
	}
	//input A
	int A[arows][acols];
	for(int i=0; i<arows; i++) {
		printf("\n\tEnter value of row:%d", i);
		for(int j=0; j<acols; j++) {
			printf(", col:%d=", j);
			scanf("%d",&A[i][j]);
		}
	}
	
	//print value of A 
	for(int i=0; i<arows; i++) {
		printf("\t\n|\t");
		for(int j=0; j<acols; j++) {
			printf("%d\t", A[i][j]);
			if(j+1<acols) {
				printf(",");
			}
		}
	printf("|\n");
	}
	//printf
	return EXIT_SUCCESS;
}