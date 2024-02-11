#include <stdio.h>
#include <stdlib.h>

typedef struct studentRecord
{
	char name[500];
	int roll;
	float midMarks;

} SR;

int main()
{
	int q;
	FILE *ptr;
	SR j[5];
	char a[10];
	ptr = fopen("srecord.txt", "w+");
	for (int i = 0; i < 5; i++)
	{
		printf("Enter name::");
		scanf("%s", j[i].name);
		printf("Enter roll:: ");
		scanf("%d", &j[i].roll);
		printf("Enter midmarks:: ");
		scanf("%f", &j[i].midMarks);

		fprintf(ptr, "%s, ", j[i].name);
		fprintf(ptr, "%d, ", j[i].roll);
		fprintf(ptr, "%0.2f", j[i].midMarks);
		fprintf(ptr, "\n");
	}
	printf("Enter roll you want data of:: ");
	scanf("%d", &q);
	fgets(a, 10, ptr);
	printf("\nfdsfsfsdf%s", a);
	//char c = fgetc(ptr);
	//char c = fgetc("%s",500 ,ptr);
	//fscanf(ptr, "%d, ", &j[q].roll);
	//fscanf(ptr, "%f", &j[q].midMarks);
	//fprintf(ptr, "\n");

	//printf("Name:: %s",j[q].name);
	//printf("Roll::%d",j[q].roll);
	//printf("Midmarks::%f", j[q].midMarks);
	fclose(ptr);

	return 0;
}