#include <stdio.h>

struct employee {
	int age;
	float code;
};



int main() {
	struct employee e1;
	e1.age = 19;
	struct employee *ptr;
	ptr = &e1;
	
	//printf("the age of employee is %d", (*ptr).age);
	printf("the age of employee is %d", ptr->age);
	return 0;
}
	
