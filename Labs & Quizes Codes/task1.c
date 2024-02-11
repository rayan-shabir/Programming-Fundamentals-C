#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp = fopen("20by20.txt", "r");
	int arr[20][20];
	for(int i=0; i<20; i++) {
		for(int j=0; j<20; j++) {
			fscanf(fp, "%d", &arr[i][j]);
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	fclose(fp);
	
	return 0;
}