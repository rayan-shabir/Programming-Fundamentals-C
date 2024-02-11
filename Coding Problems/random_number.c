#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num;
	srand(time(0));
	num = rand() % 100+1;

	//printf("The Number is %d", num);
	
	int start = 20;
	int end = 30;
	num = rand() % (end - start +1) +start;
	printf("The Number is %d", num);
	return 0;
}
	
	