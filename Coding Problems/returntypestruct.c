#include <stdio.h>
#include <string.h>

//STRUCTURE
struct studentRecord {
	int  roll;
	int age;
};

//FUNCTION RETURN TYPE 
struct studentRecord createStrct (int i, int j) {
	struct studentRecord rec;
	rec.roll = i;
	rec.age = j;
	return rec;

}

int main () {
	struct studentRecord a = createStrct (5, 10);
	printf("data in struct %d, %d" , a.roll, a.age);

	return 0;
}