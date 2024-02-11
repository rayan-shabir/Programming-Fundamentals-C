#include <stdio.h>


int main() {
	FILE *ptr1;
	FILE *ptr2;
	ptr1 = fopen("gen.txt", "r");
	ptr2 = fopen("wrt.txt", "w");
	char c = fgetc(ptr1);
	while(c != EOF) {
		fputc(c, ptr2);
		c = fgetc(ptr1);
	}
	printf("Data is transferred");
	fclose(ptr1);
	fclose(ptr2);
	
	
	return 0;
}
