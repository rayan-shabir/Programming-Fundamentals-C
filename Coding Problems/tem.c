#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;

}Node;

void addnodeAtend(Node *cur, int data) {
	//Node *cur = node;
	while(cur->next != NULL) {
		cur= cur->next;
	} 
	cur->next = malloc(sizeof(Node));
	cur->next->next = NULL;
	cur->next->data = data;

}

void addnodeAtstart(Node *start,int data) {
	Node *temp = start;
	start = malloc(sizeof(Node));
	start->next = temp;
	start->data = data;

}

void deleteNode(Node *start, int data) {
	Node *cur = start;
	if(start->data == data) {
		Node *temp = start;
		start = temp->next;
		free(temp);
		return ;
	}
	while(cur->next->data != data) {
		cur = cur->next;
	}
	Node *temp = cur->next;
	cur->next = temp->next;
	free(temp);
		
}

void printList(Node *start) {
	//Node *cur = start;
	while(start != NULL) {
		printf("%d", start->data);
		start = start->next;
	}
	printf("\n");
}

int main() {
	Node *start = malloc(sizeof(Node));
	start->data = 1;
	start->next = NULL;
	
	addnodeAtend(start, 2);
	addnodeAtend(start, 3);
	addnodeAtend(start, 4);
	addnodeAtend(start, 5);
	addnodeAtend(start, 6);
	addnodeAtend(start, 7);
	printList(start);
	
	deleteNode(start, 4);
	printList(start);
	return 0;
}
