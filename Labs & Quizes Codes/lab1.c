#include <stdio.h> //library in C. Name of library is stdio.c.

int findMid(int a, int b, int c, int d, int e) {
	if((a<c && b<c && c<d && c<e)||(a<c && d<c && c<b && c<e)||(a<c && e<c && c<b && c<d)||(b<c && d<c && c<a && c<e)||(b<c && e<c && c<a && c<d)||(d<c && e<c && c<a && c<b)) {
		return c;
	}else if((a<b && c<b && b<d && b<e)||(a<b && d<b && b<c && b<e)||(a<b && e<b && b<c && b<d)||(c<b && d<b && b<a && b<e)||(c<b && e<b && b<a && b<d)||(d<b && e<b && b<a && b<c)) {
		return b;
	}else if((b<a && c<a && a<d && a<e)||(b<a && d<a && a<c && a<e)||(b<a && e<a && a<c && a<d)||(c<a && d<a && a<b && a<e)||(c<a && e<a && a<b && a<d)||(d<a && e<a && a<c && a<b)) {
		return a;
	}else if((a<d && b<d && d<c && d<e)||(a<d && c<d && d<b && d<e)||(a<d && e<d && d<b && d<c)||(b<d && c<d && d<a && d<e)||(b<d && e<d && d<a && d<c)||(c<d && e<d && d<a && d<b)) {
		return d;
	}else {
		return e;
	}
}

//this is a main function.
int main () {
	int a, b, c, d, e;
	printf("\n\t input a is= \n\t");
	scanf("%d", &a);
	printf("\n\t input b is= \n\t");
	scanf("%d", &b);
	printf("\n\t input c is= \n\t");
	scanf("%d", &c);
	printf("\n\t input d is= \n\t");
	scanf("%d", &d);
	printf("\n\t input e is= \n\t");
	scanf("%d", &e);
	//here function is called.
	int middle = findMid(a, b, c, d, e);
	printf("\n\n\tmiddle is = %d\n\n\t", middle);
	return 0;
}
	
