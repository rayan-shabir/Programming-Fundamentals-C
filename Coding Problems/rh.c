#include <stdio.h> //this includes library in C code.name of library is stdio.h.

collatz(long startpoint); //decleration of funcion.

collatz(long startpoint) {
	long i= 0;
	long startpoint = 7; //initialization
	while(startpoint !=1) {//condition
		printf("\ngraph"\n\t);
		scanf("%ld", &startpoint);
		if(startpoint is even) {
		startpoint = startpoint/2;
		printf("digit\n\n")
		}else if(startpoint is odd) {
		startpoint = 3startpoint + 1;
		printf("||\t\t");
		else {
		printf("nothing");
		}
		printf(",,,,,")
	}
	return startpoint;
}
//main function.
long main() {
	//call
	long startpoint;
	printf("\n\n\tgive input\n\n\t");
	scanf("%ld", &startpoint);
	return 0;
}