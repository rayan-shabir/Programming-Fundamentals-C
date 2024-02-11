#include <stdio.h>
#include <stdlib.h>

typedef struct linklist {
	int data;
	struct linklist *next;
}N;

N *del_node_at_part(N *head, int i) {
	N *ptr = head;
	if(head->data == i) {
		N *temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
		return head;
	}else {
		while(ptr->next->data != i && ptr->next != NULL) {
			ptr = ptr->next;
		}if(ptr == NULL) {
			return head;
		}else if(ptr != NULL) {
		N *temp = ptr->next;
		ptr->next = temp->next;
		free(temp);
		temp = NULL;
		}
	}
	return head;
	
}

N *add_node_at_start(N *head, int i) {
	N *temp = malloc(sizeof(N));
	temp->data = i;
	if(head == NULL) {
		head = temp;
		temp->next = NULL;
	}
	temp->next = head;
	head=temp;
	return head;
}

void add_node_at_end(N *head, int i) {
	N *temp = malloc(sizeof(N));
	temp->data = i;
	temp->next = NULL;
	N *ptr = head;
	while(ptr->next != NULL) {
		ptr = ptr->next;
	}
	ptr->next = temp;	
}

void printll(N *head) {
	if(head == NULL) return;
	
	N *ptr = head;
	while(ptr != NULL) {
		printf("\n%d, ", ptr->data);
		ptr = ptr->next;
	}	
}

void findAndInsert(R *headOfLL, float toFind, float toInsert) {
	N *temp = malloc(sizeof(N));
	temp->data = toInsert;
	N *ptr = head;
	while(ptr->next != NULL) {
		if(ptr->data == toFind) {
			temp->next = ptr->next;
			ptr->next = temp;
			return;
		}
		ptr = ptr->next;

	}
	ptr->next = temp;
	temp->next = NULL;
}

void findAndInsert(R *headOfLL, float toFind, float toInsert) {
	N *temp = malloc(sizeof(N));
	temp->data = toInsert;
	N *ptr = head;
	while(ptr->next != NULL) {
		if(ptr->data == toFind) {
			temp->next = ptr->next;
			ptr->next = temp;
			return;
		}
		ptr = ptr->next;	
	}
	ptr->next = temp;
	temp->next = NULL;
	
}

void addElement(T *headOfDLL, long toAdd) {
	N *temp = malloc(sizeof(N));
	temp->data = toAdd;
	N *ptr = head;
	while(ptr->next != NULL) {
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->next = NULL;
	temp->previous = ptr;
}

void findAndInsert(R *headOfLL, float toFind, float toInsert) {
	N *ptr = head;
	N *temp = malloc(sizeof(N));
	temp->data = toInsert;

	while(ptr->next != NULL) {
		if(ptr->data == toFind) {
			temp->next = ptr->next;
			ptr->next = temp;
			return;
		}
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->next = NULL;
}

void printll_alternative(N *head) {
	if(head == NULL) return;
	printf("\nODD data");
	N *ptr = head;
	while(ptr != NULL) {
		printf("\n%d, ", ptr->data);
		ptr = ptr->next->next;
	}	
}

void printll_alt(N *head) {
	if(head == NULL) return;
	printf("\nEVEN data");
	N *ptr = head;
	while(ptr != NULL) {
		printf("\n%d, ", ptr->next->data);
		ptr = ptr->next->next;
	}	
}

int main() {
	N *head = malloc(sizeof(N));
	head->data = 3;
	head->next = NULL;
	
	head = add_node_at_start(head, 2);
	head = add_node_at_start(head, 1);
	add_node_at_end(head, 4);
	add_node_at_end(head, 5);
	add_node_at_end(head, 6);
	printll(head);
	printll_alternative(head);
	printll_alt(head);
	head = del_node_at_part(head, 4) ;
	printll(head);
}