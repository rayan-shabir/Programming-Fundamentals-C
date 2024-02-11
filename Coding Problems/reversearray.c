#include <stdio.h>

int reverse(int arr[], int size) {
	int temp;
	for(int i=0; i<(size/2); i++) {
		temp = arr[i];
		arr[i] = arr[size - i -1];
		arr[size - i -1] = temp;
	}
		
}

int main() {
	int arr[5] ={1 , 2, 3, 4, 5};
	for(int i=0; i<5; i++) {
		printf("\n\tThe values of %d is %d", i, arr[i]);
	}
	reverse(arr, 5);
	
	printf("\n\t****************************");
	for(int i=0; i<5; i++) {
		printf("\n\tThe values of %d is %d", i, arr[i]);
	}
	return 0;
}