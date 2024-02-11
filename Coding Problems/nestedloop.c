#include <stdio.h>
#include <stdlib.h>

int main () {
	for(int i=0; i<3; i++) {
		for(int j=0; j<2; j++) {
			printf("\n\trows=%d, cols=%d\n\t", i , j);
		}
	}
}