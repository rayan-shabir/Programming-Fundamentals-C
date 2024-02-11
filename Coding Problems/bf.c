#include <stdio.h>

int main() {
	int i = -1;
	while(i != 0) { //condition
		printf("\n\n\t continue loop \t\n\n");
		scanf("%d",&i);
		printf("\n\n\t input digit is=%d \t\n\n", i);
		scanf("%d", &i); //&i ram address of integer i. scanf writes on given address.
		if(i>= 1 && i< 4){
			printf("\n\n\t A \t\n\n");
		} else if(i >= 4 && i<7) {
			printf("\n\n\t B \t\n\n");
		} else {
			printf("\n\n\t N \n\n");
		}
	}
	printf("\n\n\t outside of loop \t\n\n");
	return 0;
}