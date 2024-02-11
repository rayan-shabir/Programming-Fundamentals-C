#include <stdio.h>
#include <stdlib.h>

int findfloat(int row, int col, float B[row][col], float a) {
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			if(a == B[i][j]) {
				return a;
			} else if(a != B[i][j]) {
				return -1;
			}
		}
	}
	
}



int main() {
	float a;
	int x;
	int row, col;
	printf("\n\tEnter No. of rows:: ");
	scanf("%d", &row);
	printf("\n\tEnter No. of cols:: ");
	scanf("%d", &col);
	float A[row][col];
	
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			printf("\n\tEnter value at A[%d][%d] ::  ",i , j);
			scanf("%f", &A[i][j]);
		}
	}
	printf("\n\tPlease Enter value you want to check = ");
	scanf("%f", &a);
	float val = findfloat(row, col, A, a);
	printf("The value is %.3f", val);
	return 0;
}