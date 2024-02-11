#include <stdio.h>
#include <stdlib.h>
#define size 5

void rec2(int i) {
	if(i == 0) return;

	printf("%d", i);
	return rec2(i-1);
}

int main() {
	rec2(5);
	return 0;
		
}