#include <stdio.h>
#include <string.h>

typedef struct studentRecord {
	char name[10];
	int rollnumber;
	float age;
}strcrd;



int main() {
	strcrd a;
	strcpy(a.name, "Rayan");
	a.rollnumber = 535;
	a.age = 18;
	printf("data in structure is %s, %d, %.2f", a.name, a.rollnumber, a.age);
	return 0;
}