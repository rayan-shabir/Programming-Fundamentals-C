#include <stdio.h>
#include <stdlib.h>

#define EA 5

typedef struct data {
	int i;
	long j;
}data;
long size=0, insertAt=0, removeFrom=0;

data *qelm= NULL;
//data qelm[];

void reserveMemory() {
	if(qelm == NULL) {
		qelm = malloc(EA*sizeof(data));
	}else {
		realloc(qelm, (EA+size)*sizeof(data));
	}
	size = size + EA;
}

void enqueue(int i, long j) {
	if(insertAt == size) {
		reserveMemory();
	}
	data d;
	d.i;
	d.j;
	qelm[insertAt] = d;
	insertAt ++;
}

data *dequeue() {
	if(removeFrom == insertAt) {
		printf("\n\tQ is empty");
		return NULL;
	}	
	return &qelm[removeFrom++];
}

void printMenue() {
	printf("\n\tSelect 1 for enqueue");
	printf("\n\tSelect 2 for dqueue");
	printf("\n\tSelect 3 for seeing sizes");
	printf("\n\tSelect 4 for quit");
}

int main(){
	int ch;
	data *elm;
	int i;
	long j;
	
	while(1) {
		printMenue();
		printf("\n\tEnter your choice::");
		scanf("%d", &ch);
		
		switch(ch) {
			case 1:
				printf("\n\tChoice i and j::");
				scanf("%d", &i);
				scanf("%d", &j);
				enqueue(i, j);
				break;
			case 2:
				elm = dequeue();
				if(elm != NULL) {
					printf("\n\t%d, %ld", elm ->i, elm ->j);
				}
				break;
			case 3:
				printf("\n\tsize = %ld, insertAt = %ld, removeFrom= %ld", size, insertAt, removeFrom);
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}