#include <stdio.h>

int binary(int size, int B[size], int x) {
	int s=0;
	int e= size;
	int m;
	while (s < e) {
		m = (s + e)/2;
		if(x == B[m]) {
			return m;
		} else if(x <B[m]) {
			e= m-1;
		}else if(x > B[m]) {
			s= m+1;
		}
	}
	return -1;
	
}

int main() {
	int A[11];
	int x;
	printf("\n\tPlease enter sorted ascending array");
	
	for(int i=0; i<11; i++) {
		printf("\n\tA[%d] = ", i);
		scanf("%d", &A[i]);
	}

	printf("\n\tThe Array is:: ");
	for(int i=0; i<11; i++) {
		if(A[i] > A[i-1]) {
			printf("\n\tA[%d] = %d", i, A[i]);
			continue;
		}
		printf("\n\tA[%d] = %d", i, A[i]);
		continue;
		
	}

	printf("\n\tEnter x to find:: ");
	scanf("%d", &x);
	int index =  binary(11, A, x);
	if(index == -1) {
		printf("\n\tELEMENT NOT FOUND");
	} else if(index != -1) {
		printf("\n\tELEMENT FOUND at index %d",index);
	} 
	
	return 0;
}