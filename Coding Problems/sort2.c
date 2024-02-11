#include <stdio.h>
#include <stdlib.h>
void input(int b[], int size) {
	for(int i=0; i<size; i++) {
		printf("\n\tEnter Value at a[%d]:: ",i);
		scanf("%d",&b[i]);
	}
}

void print(int b[], int size) {
	for(int i=0; i<size; i++) {
		printf("\n\tThe Value at a[%d]= %d \n\t",i , b[i]);
		
	}
}
int findMinInd(int e[] , int start, int end) {
	int min = e[start];
	int minInd = start;

	for(int i = start+1; i <end; i++) {
		if(e[i] < min) {
			min = e[i];
			minInd = i;
		}
	}
	return minInd;
}
void swap(int e[], int loc1, int loc2) {
	int temp;
	temp = e[loc1];
	e[loc1] = e[loc2];
	e[loc2] = temp;
}	
void selectionsort(int e[], int size) {
	for(int i=0; i<size; i++) {
		int min = findMinInd(e, i, size);
		swap(e, i, min);
	}
}
int main() {
	int size = 5;
	int a[size];
	input(a, 5);
	printf("\n\tARRAY BEFORE SORT\n\t");
	print(a , 5);
	selectionsort(a , 5);
	printf("\n\tARRAY AFTER SORT\n\t");
	print(a , 5);

	return EXIT_SUCCESS;
}