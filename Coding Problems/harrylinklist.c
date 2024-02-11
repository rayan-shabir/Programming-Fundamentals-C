#include <stdio.h>
#include <stdlib.h>

typedef struct link_list {
	int data;
	struct link_list *next;
}Node;

void printlist(Node *start) {
	while(start != NULL) {
		printf("%d", start->data);
		start = start->next;
	}
}

int main() {
	Node *start;
	Node *second;
	Node *third;
	start = malloc(sizeof(Node));
	second = malloc(sizeof(Node));
	third = malloc(sizeof(Node));

	start->data = 1;
	start->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;

	printlist(start);
	//printlist(second);
	//printlist(third);
	return 0;
}