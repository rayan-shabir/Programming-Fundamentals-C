#include <stdio.h>

void Array(int j[], int size) {
	int i=4;
	//for(int i=0; i<size; i++){
	j[i]++;
	printf("\n\tArray[%d]=%d\n", i, j[i]);
	//j[i]++;
}
/*
void printArray(int j[], int size) {
	int i=4;
	//for(int i=0; i<size; i++){
	printf("\n\tArray[%d]=%d\n", i, j[i]);
	j[i]++;
}
*/

int main () {
	//int i;
	int k[5]={2, 3, 4, 6, 8};
	printArray(k , 5);
	printArray(k , 5);
	printArray(k , 5);
	printf("\n\tArray[%d]=%d\n", 4 ,k[4]);
	Array(k , 5);
	Array(k , 5);
	Array(k , 5);
	printf("\n\tArray[%d]=%d\n", 4 ,k[4]);
	return 0;
}
	