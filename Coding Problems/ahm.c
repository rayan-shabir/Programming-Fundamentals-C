#include <stdio.h>
#include <stdlib.h>

int callcount();
int callcount1();

int main() {
	printf("By simple: ");
	for(int i=0; i<5; i++) {
		printf("\n%d\n", callcount());
	}
	printf("By static: ");
	for(int i=0; i<5; i++) {
		printf("\n%d\n", callcount1());
	}
	return 0;
}

int callcount() {
	int call = 0;
	return ++call;
}

int callcount1() {
	static int call = 0;
	return ++call;
}