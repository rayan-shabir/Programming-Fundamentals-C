#include <stdio.h>
#include <conio.h>

typedef struct class1 {
	int rollNumber;
	char att[558];

} class1; 

int main() {
	class1 c;
	int num;
	printf("\t\t***PLEASE MARK ATTENDENCE***");
	printf("\nNOTE::(enter 'p' for present and 'a' for absent)");
	printf("\nROLL NO::\t\t\t");
	printf("ATTENDENCE\t\t\t");
	
	for(int i=500; i<558; i++) {
		printf("\n\nBITF20M%d \t\t\t   ", i+1);
		//scanf(" %c", &c.att[i]);
		c.att[i] = getch();
		printf(" %c", c.att[i]);
		if(c.att[i] == 'q') {
			break;
		}
	}

	printf("\nEnter '1' to see ROLL NO.'s of present students or Enter '0' to see ROLL NO. of absent students:: ");
	scanf("\n%d", &num);
	
	for(int i=500; i<558; i++) {
		if(c.att[i] == 'p' && num == 1) {
			printf("\n\nBITF20M%d \t\t\t   ", i+1);
			printf("PRESENT");
		}else if(c.att[i] == 'a'&& num == 1) {
			printf("\n\nBITF20M%d \t\t\t   ", i+1);
			printf("ABSENT");
		}
	} 
	for(int i=500; i<558; i++) {
		if(c.att[i] == 'a' && num == 0) {
			printf("\n\nBITF20M%d \t\t\t   ", i+1);
			printf("ABSENT");
		}
	}

	printf("\n\t\t\t***THANK YOU***\t\t\t");
	return 0;

	return 0;
}
