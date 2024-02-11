#include <stdio.h>
#include <stdlib.h>
	
typedef struct dlinklist {
	int data;
	struct dlinklist *next;
	struct dlinklist *prev;

}Node;

void printnext(Node *start) {
	while(start!= NULL) {
		printf("\n%d", start->data);
		start = start->next;
	}
}

void printprev(Node *third) {
	while(third!= NULL) {
		printf("\n%d", third->data);
		third = third->prev;
	}
}

int main() {
	Node *start = malloc(sizeof(Node));
	Node *second = malloc(sizeof(Node));
	Node *third = malloc(sizeof(Node));
	
	int c;
	printf("\nEnter your choice(1 for singlylist, 2for doublylist)");
	start->data = 1;
	start->prev = NULL;
	start->next = second;
	
	second->data = 2;
	second->prev = start;
	second->next = third;
	
	third->data = 3;
	third->prev = second;
	third->next = NULL;
	
	printf("\nforward list");
	printnext(start);
	printf("\nBackward list");
	printprev(third);
	return 0;
}