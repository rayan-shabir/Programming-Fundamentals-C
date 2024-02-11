#include <stdio.h>


int main() {
	int age;
	printf("\tEnter Your Age :");
	scanf("%d", &age);
	if(age < 18 && age >=0 || age > 70) {
		printf("\n\tYou Are Not ELIGIBLE");
	} else if(age >=18 && age <=70) {
		printf("\n\tYou Are ELIGIBLE");
	}
	//eligibility(age);
	return 0;
}