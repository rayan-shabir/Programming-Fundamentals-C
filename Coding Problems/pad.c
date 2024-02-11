#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

void input(int arow, int acol,int C[arow][acol]) {
	for(int i=0; i<arow; i++) {
		for(int j=0; j<acol; j++) {
			printf("\n\tEnter value at [%d][%d]::", i, j);
			scanf("%d", &C[i][j]);
		}
	}
}
	
void print(int arow, int acol,int C[arow][acol]) {
	for(int i=0; i<arow; i++) {
		for(int j=0; j<acol; j++) {
			printf("\n\tEnter value at [%d][%d]::%d", i, j, C[i][j]);
		}
	}
}

int valdiatecmp(int arow, int acol, int brow, int bcol) {
	if(acol == brow) {
		return 1;
	}
	return -1;
}

int valdiatemult(int arow, int acol, int brow, int bcol) {
	if(acol == brow) {
		return 1;
	}
	return -1;
}

int valdiateadd(int arow, int acol, int brow, int bcol) {
	if(arow == brow && acol == bcol) {
		return 1;
	}
	return -1;
}
/*
void pp(int arow, int acol, int brow, int bcol, int A[arow][acol], int B[brow][bcol]) {
	if (cmp(arow, acol, brow, bcol, A, B) == -1) {
		printf("\n\tThe matrices are not same");
		return;
	}
	printf("\n\tThe matrices are same");
}
*/

void cmp(int arow, int acol, int brow, int bcol, int A[arow][acol], int B[brow][bcol]) {
	if(valdiateadd(arow, acol, brow, bcol) == -1) {
		printf("\n\tYou entered wrong dimensions");
		return;
	}
	for(int i=0; i<arow; i++) {
		for(int j=0; j<arow; j++) {
				if(A[i][j] != B[i][j]) {
					printf("\n\tThe matrices are not same");
					return;
				}
		}
	}
	printf("\n\tThe matrices are same");
}

void mult(int arow, int acol, int brow, int bcol, int A[arow][acol], int B[brow][bcol], int result[arow][acol]) {
	if(valdiatemult(arow, acol, brow, bcol) == -1) {
		printf("\n\tYou entered wrong dimensions");
		return;
	}
	int sum=0;
	for(int i=0; i<arow; i++) {
		for(int j=0; j<bcol; j++) {
			for(int k=0; k<acol; k++) {
				sum = sum +(A[i][k] * B[k][j]);
			}
			result[i][j] = sum;
			sum = 0;
		}
	}	
		
}

void addSub(int arow, int acol, int brow, int bcol, int A[arow][acol], int B[brow][bcol], int result[arow][bcol], int isAdd) {
	if(valdiateadd(arow, acol, brow, bcol) == -1) {
		printf("\n\tYou entered wrong dimensions");
		return;
	}
	for(int i=0; i<arow; i++) {
		for(int j=0; j<arow; j++) {
			if(isAdd == 2) {
				result[i][j] = A[i][j] + B[i][j];
			} else {
				result[i][j] = A[i][j] - B[i][j];
			}
		}
	}
}

void menue () {
	int arow, acol, brow, bcol, option;
	while(1) {
		printf("\n\t*****MENUE*****");
		printf("\n\tEnter 1 for multiply");
		printf("\n\tEnter 2 for add");
		printf("\n\tEnter 3 for subtract");
		printf("\n\tEnter 4 for compare");
		printf("\n\tEnter 5 for quit\n\t");
		scanf("\n\t%d", &option);
		if(option == 1) {
			printf("\n\tEnter dimension for matrix A::");
			scanf("%d", &arow);
			scanf("%d", &acol);
			printf("\n\tEnter dimension for matrix B::");
			scanf("%d", &brow);
			scanf("%d", &bcol);
			int A[arow][acol], B[brow][bcol], result[arow][acol];
			printf("\n\tInput values in matrix A::");
			input(arow, acol, A);
			printf("\n\tInput values in matrix B::");
			input(brow, bcol, B);
			mult(arow, acol, brow, bcol, A, B, result);
			printf("\n\tRESULTED MATRIX");
			print(arow, acol, result);
		}else if(option == 2 || option == 3) {
			printf("\n\tEnter dimension for matrix A::");
			scanf("%d", &arow);
			scanf("%d", &acol);
			printf("\n\tEnter dimension for matrix B::");
			scanf("%d", &brow);
			scanf("%d", &bcol);
			int A[arow][acol], B[brow][bcol], result[arow][acol];
			printf("\n\tInput values in matrix A::");
			input(arow, acol, A);
			printf("\n\tInput values in matrix B::");
			input(brow, bcol, B);
			addSub(arow, acol, brow, bcol, A, B, result, option);
			printf("\n\tRESULTED MATRIX");
			print(arow, acol, result);
		}else if(option == 4) {
			printf("\n\tEnter dimension for matrix A::");
			scanf("%d", &arow);
			scanf("%d", &acol);
			printf("\n\tEnter dimension for matrix B::");
			scanf("%d", &brow);
			scanf("%d", &bcol);
			int A[arow][acol], B[brow][bcol], result[arow][acol];
			printf("\n\tInput values in matrix A::");
			input(arow, acol, A);
			printf("\n\tInput values in matrix B::");
			input(brow, bcol, B);
			cmp(arow, acol, brow, bcol, A, B);
			//pp(arow, acol, brow, bcol, A, B);
		}else if(option == 5) {
			exit(EXIT_SUCCESS);
		}
	}
}

int main() {
	menue();
	return 0;
}
