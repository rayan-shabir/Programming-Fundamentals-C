#include <stdio.h>

typedef struct studentRecord {
	int age;
	float rollNumber;
	
}srcrd;

void input(srcrd k[5]) {
	for(int i=0; i<5; i++) {
		printf("\n\tEnter age of student %d:: ", i+1);
		scanf("%d", &k[i].age);
		printf("\n\tEnter Roll Number of student %d:: ", i+1);
		scanf("%.2f", &k[i].rollNumber);
	}
	
}

void print(srcrd j[5]) {
	for(int i=0; i<5; i++) {
		printf("\n\tThe age of student %d is %d", i+1, j[i].age);
		printf("\n\tThe Roll Number of student %d is %.2f", i+1, j[i].rollNumber);
		
	}
}

	
int main() {
	srcrd i[5];
	input(i);
	print(i);

	return 0;
}