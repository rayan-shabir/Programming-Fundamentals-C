#include <stdio.h>

int binary(int size, int B[],int x) {
	int s=0;
	int e=size;
	int m=0;
	while(s < e) {
		m = (s+(e-1))/2;
		if(x == B[m]) {
			return m;
		} 
		if(x < B[m]) {
			e = m-1;
		}
		if(x > B[m]) {
			s = m+1;
		}
	}
	return -1;
}
		

int main() {
	int x;
	int size=5;
	int A[size];
	for(int i=0; i<size; i++) {
		printf("\n\tEnter value at A[%d]:: ", i);
		scanf("%d", &A[i]);
	}
	
	for(int i=0; i<size; i++) {
		printf("\n\tThe value at A[%d]=%d ", i, A[i]);
	}
	printf("\n\tEnter value of x:: ");
	scanf("%d", &x);
	int ind =  binary(size, A, x);
	printf("\n\tThe value x is at index =%d ", ind);
	return 0;
}