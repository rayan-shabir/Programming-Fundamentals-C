#include <stdio.h>
#include <stdlib.h>

int main() {
	int i=5, j;
	FILE *ptr;
	ptr =fopen("srecord.txt", "w+");
	fprintf(ptr, "%d", i);
	rewind(ptr);
	//fseek(ptr, 0, SEEK_SET);
	fscanf(ptr, "%d", &j);
	printf("We got from file i=%d", j);
	return 0;
}