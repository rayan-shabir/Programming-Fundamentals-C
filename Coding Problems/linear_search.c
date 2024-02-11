#include <stdio.h>

int main() {
	int arr[8] = {10, 7, 9, 11, 1, 0, 6, 5};
	int x;
	int found = 0;
	printf("Enter x to search: \n");
	scanf("%d", &x);
	
	for(int i=0; i<8; i++) {
		if(x == arr[i]) {
			printf("The number is at index %d\n", i);
			found = 1;
			break;
		}
	}
	if(!found) {
		printf("No found");
	}
	return 0;
}