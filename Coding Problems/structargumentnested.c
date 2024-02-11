#include <stdio.h>
#include <string.h>

struct rollNumber {
	char batch[8]; //BITF20M
	int num; //530
};

struct studentRecord {
	struct rollNumber roll;
	int age;
		
};

struct studentRecord createstruct(struct rollNumber i, int j) {
	struct studentRecord rec;
	rec.roll = i;
	rec.age = j;
	return rec;
}



int main() {
	struct rollNumber r;
	strcpy(r.batch , "BITF20M");
	r.num = 535;
	struct studentRecord a = createstruct(r, 18);

	printf("data in struct is %s%d, %d", a.roll.batch, a.roll.num, a.age);
	return 0;
}