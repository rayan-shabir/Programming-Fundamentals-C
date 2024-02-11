#include <stdio.h>
#include <stdlib.h>
#include "esii.c"

// MY NAME IS RAYAN

//HELLO


void p(int i) {
	if(i == 0) {
		return;
	}
	//ITS OK
	printf("%d", i);
	p(i-1);
	printf("%d", i);
}
/*
void p(int i) {
	if(i == 0) {
		return;
	}
	//ITS OK
	printf("%d", i);
*/

int main() {
	p(5);
	return 0;
}