#include <stdio.h>
#define FN "record.txt"

typedef struct studentrecord{
	int roll;
	char name[50];
	float marks;
}SR;

void add() {
	SR t;
	printf("\nEnter Roll: ");
	scanf("%d", &t.roll);

	printf("Enter Nmae: ");
	scanf("%s", t.name);

	printf("Enter Marks: ");
	scanf("%f", &t.marks);
	
	FILE *fp;
	fp = fopen(FN , "+r");
	if(fp == NULL) {	
		fp = fopen(FN, "w");
	}
	fseek(fp, 0, SEEK_END);
	fprintf(fp, "%d,  %s,  %.3f\n", t.roll, t.name, t.marks);
	fclose(fp);

}

void print() {
	FILE *fp;
	fp = fopen(FN, "r");
	if(fp == NULL) {
		printf("No record found");
		return;
	}
	SR t;
	while(fscanf(fp, "%d,  %s,  %f\n", &t.roll, t.name, &t.marks) != EOF) {
		
		printf("%d,  %s,  %f\n", t.roll, t.name, t.marks);
	}
}

int main() {
	add();
	add();
	add();
	print();
	return 0;
}
	