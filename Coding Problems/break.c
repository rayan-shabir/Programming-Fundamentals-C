#include <stdio.h>

int main() {
	for(int i=0; i<10; i++) {
		printf("\n i = %d", i);
		if(i >= 2) {
			break;
		}
	}
	printf("\nI am outside the loop");
}