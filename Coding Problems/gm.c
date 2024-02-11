#include <stdio.h> //library name stdio.h

int findMain(int first, int second, int third, int fourth); // decleration

int findMain(int first, int second, int third, int fourth) {
	if(first<second && first<third && first<fourth);
	printf ("\n first\n");
	}else if (second < third && second <first && second<fourth) {
	printf ("\n second \n");
	}else if (third <first && third < second && third <third) {
	printf ("\n third\n");
	}else {fourth < first && fourth < second && fourth <third) {
	printf ("\n fourth\n");
	}
	int compare;
	compare = first , second , third , fourth;
	return smallest;
}



int main() {
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	printf("\n\tgive input\n");
	scanf("%d", &i, &j, &k, &L);
	int smallest=findMin(i, j, k, l);
	printf("\n\nsmallest is = %d\n\n",smallest);
	return 0;
}