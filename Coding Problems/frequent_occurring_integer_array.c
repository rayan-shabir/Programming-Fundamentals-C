#include <stdio.h>

void printMostFreqInt(int array[], int sizeOfArray) {
	int m_freq;
	int max_count = 0;
	for(int i=0; i<sizeOfArray; i++) {
		int count = 1;	
		int j = i+1;
		while(j < sizeOfArray) {
			if(array[i] == array[j]) {
				count++;
			}
			j++;
		}
		if(count > max_count) {
			max_count = count;
			m_freq = array[i];
			
		}
	}
	printf("Most frequent is %d", m_freq);
}

int main() {
	int n;
	printf("\nEnter size of array: ");
	scanf("%d", &n);
	int Array[n];

	printf("***Enter values in array***");
	for(int i=0; i<n; i++) {
		printf("\n Array[%d] = ", i);
		scanf("%d", &Array[i]);
	}
	
	printMostFreqInt(Array, 5);
	return 0;
}