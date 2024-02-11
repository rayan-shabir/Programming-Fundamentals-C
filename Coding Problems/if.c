#include <stdio.h>

int main() {
	int i = 0;
	int loopcount =0;
	while (loopcount <5) { //condition
		printf("\n\n\t continue loop=:\t\n\n");
		scanf("%d", &loopcount); //&i ram adress of integer i.scanf writes on given adress.
		printf("\ntake input i from screen\t");
		scanf("%d", &i);
		if (i >= 1 && i < 4); {
			printf("\n\n\t A \n\n");
		} else if (i >= 4 && i < 7) {
			printf("\n\n\t B \n\n");
		} else {
			printf("\n\n\t N \n\n");
		}
		print("D\n");
	}
	printf("\n\n\t outside of loop\n\n);
	for (int floopcount =0; floopcount < 5; floopcount = floopcount + 1) {
		printf("\ntake input i from screen\t");
		scanf("%d", &i);
		if (i >= 1 && i < 4); {
			printf("\n\n\t A \n\n");
		} else if (i >= 4 && i < 7) {
			printf("\n\n\t B \n\n");
		} else {
			printf("\n\n\t N \n\n");
		}
		print("D\n");
	}
	return 0;
}

	