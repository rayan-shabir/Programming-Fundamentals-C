#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Question # Print a pattern of numbers from 1 to n as shown below.
Each of the numbers is separated by a single space 
2 2 2
2 1 2
2 2 2
OR
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
*/

int main() {

    	int n;
    	scanf("%d", &n);
	int len = 2*n - 1;
	int min = 0;
  	// Complete the code to print the pattern.
	for(int i = 0; i < len; i++) {
		for(int j = 0; j < len; j++) {
			if(i < j) min = i;
			else min = j;
	
			if(min < len-1-i) min = min;
			else min = len-1-i;
		
			if(min < len-1-j) min = min;
			else min = len-1-j;
			
			printf("%d ", n-min);
		}
		printf("\n");
	}
    	return 0;
}