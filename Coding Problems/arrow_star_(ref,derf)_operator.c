#include <stdio.h>
#include <stdlib.h>


typedef struct hello {
	int i;
	float j;
}R;

void you() {
	int *arr = malloc(10*sizeof(int));
	*(arr+2) = 111;
	printf("%d", *(arr+2));
	printf("\n%d", arr[2]);
}

void me() {
	int arr[5] = {1, 2, 99, 5, 6};
	printf("\n%d", *(arr+2));
	printf("\n%d", arr[2]);
}

int main() {
	R *arr = malloc(10*sizeof(R));
	you();
	me();
	arr[2].i = 3;
	(arr+2)->j = 5.9;
	printf("\n%d", arr[2].i);
	printf("\n%.3f", (arr+2)->j);
	return 0;
}
