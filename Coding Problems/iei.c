#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;	
}N;


void add_node_at_end(N *head, int i) {
	N *ptr = head;
	N *cur = malloc(sizeof(N));
	cur->data = i;
	cur->next = NULL;

	while(ptr->next != NULL) {
		ptr = ptr->next;
	}
	ptr->next = cur;
	
}

N *add_node_at_start(N *head, int i) {
	N *cur = malloc(sizeof(N));
	cur->data = i;
	cur->next = head;
	head = cur;
	return head;
}

N *del_first_node(N *head) {
	if(head == NULL)  {
		printf("Link list is empty");
	}else {
		N *temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
	return head;
}

void del_node_end(N *head) {
	if(head == NULL) {
		printf("Linklist is empty");
	}else if(head->next == NULL) {
		free(head);
		head = NULL;
	}else {
		N *ptr1 = head;
		N *ptr2 = head;
		while(ptr1->next != NULL) {
			ptr2 = ptr1;
			ptr1 = ptr1->next;
		}
		ptr2->next = NULL;
		free(ptr1);
		ptr1 = NULL;
	}

}

N *del_node_at_particular(N *head, int i) {
	N *ptr = head;
	if(head->data == i) {
		N *temp = head;
		head = head->next;
		free(temp);
		//temp == NULL;
	}else {
		while(ptr->next->data != i) {
		ptr = ptr->next;
		}
	N *temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	}
	return head;
}

void print_linklist(N *head) {
	N *ptr = head;
	if(ptr == NULL) {
		printf("Linklist is empty");
		return;
	}
	while(ptr != NULL) {
		printf("%d\n", ptr->data);
		ptr = ptr->next;
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
	print_linklist(head);

	printf("\n***After Deletion***\n");

	//head = del_first_node(head);
	//head = del_first_node(head);
	//del_node_end(head);
	del_node_at_particular(head, 3);
	print_linklist(head);
	return 0;
}