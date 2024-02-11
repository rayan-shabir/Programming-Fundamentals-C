#include <stdio.h>

int main() {
	int i=0;
	int loopcount=2;
	while (loopcount<5) {
		loopcount =loopcount + 1;
		printf("\n\n\twrite digit\n\n");
		scanf("%d",&i); //&i ram address of integer i.scanf writes on given address
		if(i>=1 && i<4) {
		printf("\n\tKILL\n");
		} else if(i<=5 && i>=4) {
		printf("\n\tYOU\n");
		} else if(i>=6 && i<10) {
		printf("\n\tMUJI\n");
		} else {
		printf("\n\tI\n");
		}
		printf("\n\t00000\n");
	}
	printf("\n\n\toutside the loop\n\n");
	for (int floopcount=2; floopcount < 5; floopcount =floopcount + 1) {
		printf("\n\n\twrite digit\n\n");
		scanf("%d",&i); //&i ram address of integer i.scanf writes on given address
		if(i>=1 && i<4) {
		printf("\n\tKILL\n");
		} else if(i<=5 && i>=4) {
		printf("\n\tYOU\n");
		} else if(i>=6 && i<10) {
		printf("\n\tMUJI\n");
		} else {
		printf("\n\tI\n");
		}
		printf("\n\t00000\n");
	}
	return 0;
}