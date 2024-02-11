#include <stdio.h>

int binary(int arr[], int l, int r, int x) {

	if(l <= r) {
		int m = l + (r-l)/2;

		if(arr[m] == x) {
			return m;
		} 
		if(arr[m] < x) {
			return binary(arr, m+1, r, x);
		}else {
			return binary(arr, l, m-1, x);
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
	int r = binary(arr, 0, 4, x);
	printf("\nThe value find at index %d", r);
	return 0;
}