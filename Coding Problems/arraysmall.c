#include <stdio.h>

int smallest(int j[], int size) {
	int smallestvalue = j[0];
	int smallestindex = 0;
	for(int i=0; i<size; i++) {
		if(j[i]< smallestvalue) {
			smallestvalue = j[i];
			smallestindex = i;
		}
	}
	return smallestindex;
}

int main() {
	int r[4];
	for(int i=0; i<4; i++) {
		printf("\n\tEnter value at index %d:\t", i);
		scanf("%d", &r[i]);
	}
	int smallestindex = smallest(r , 4);
	printf("\n\tSmallest value of index is %d, and it is %d", smallestindex , r[smallestindex]);
	return 0;
}

