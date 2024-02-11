#include <stdio.h>

int main () {
	int num;
	printf("\n\tEnter a number for weekdays=");
	scanf("%d" , &num);

	if(num == 1) {
		printf("\n\tSaturday\n");
	} else if (num == 2) {
		printf("\n\tSunday\n");
	} else if (num == 3) {
		printf("\n\tMonday\n");
	} else if (num == 4) {
		printf("\n\tTuesday\n");
	} else if (num == 5) {
		printf("\n\tWednesday\n");
	} else if (num == 6) {
		printf("\n\tThursday\n");
	} else if (num == 7) {
		printf("\n\tFriday\n");
	} else {
		printf("\n\tWrong input\n");
	}
	return 0;
}