#include <stdio.h>

int grade(int marks) {
	if(marks > 80 && marks <= 100) {
		printf("\n\tGood Luck");
	} else if (marks >=0 && marks <=80) {
		printf("\n\tBetter Luck Next Time");
	} else {
		printf("\n\tWrong input");
	}
}

int main () {
	int marks;
	printf("\n\tEnter Your Marks=");
	scanf("%d", &marks);
	
	grade(marks);
	return 0;
}