#include <stdio.h>

int bin(int arr[], int l, int r, int x) {

	while(l <= r) {
		int m = l + (r-l)/2; //Acoording to TA, and this is best method to find middle
		if(x == arr[m]) {
			return m;
		} 
		if(x < arr[m]) {
			r = m-1;
		}
		if(x > arr[m])  {
			l = m+1;
		}
	}
	return -1;
}

int main() {
	int x;
	int arr[5];
	for(int i=0; i<5; i++) {
		printf("\nEnter value at index %d: ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nEnter No. to find: ");
	scanf("%d", &x);
	int r = bin(arr, 0, 4, x); // we usually pass the left and the right most index
	printf("\nThe value find at index %d", r);
	return 0;
}