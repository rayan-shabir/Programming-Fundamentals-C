#include <stdio.h>

struct studentRecord {
	int rollNumber;
	int age;
};

int main() {
	struct studentRecord i, j;
	i.rollNumber = 508;
	printf("\nEnter age of student 1:: ");
	scanf("%d", &i.age);
	
	j.age = 18;
	printf("\nEnter roll Number of student 2:: ");
	scanf("%d", &j.rollNumber);

	printf("\nThe record of student 1 is %d , %d", i.rollNumber, i.age);
	printf("\nThe record of student 2 is %d, %d", j.rollNumber, j.age);
		
	return 0;
}