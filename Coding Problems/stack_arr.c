#include <stdio.h>
#include <stdlib.h>
#define size 5

int top =-1;
int stack_arr[size];

int isfull() {
	if(top == size - 1) {
		return 1;
	}else {
		return 0;
	}
}

int isempty() {
	if(top == - 1) {
		return 1;
	}else {
		return 0;
	}
}

void push(int d) {
	if(isfull()) {
		printf("Stack is overflow\n");
		return;
	}
	top++;
	stack_arr[top] = d;
}

int pop() {
	int val;
	if(isempty()) {
		printf("Stack is underflow\n");
		exit(1);
	}
	val = stack_arr[top];
	top--;
	return val;
}

int peek() {
	if(isempty()) {
		printf("Stack is underflow\n");
		exit(1);
	}
	return stack_arr[top];
}

void print() {
	if(isempty()) {
		printf("Stack is underflow\n");
		exit(1);
	}
	for(int i=0; i<=top; i++) {
		printf("%d, ", stack_arr[i]);
	}
}

int main() {
	int choice, data;
	while(1) {
		printf("\nPress '1' for push\n");
		printf("Press '2' for pop\n");
		printf("Press '3' for print top element\n");
		printf("Press '4' for print all stack elements\n");
		printf("Press '5' for exit\n");
		printf("Enter your choice: \n");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1: 
				printf("Enter Element to push: ");
				scanf("%d", &data);
				push(data);
				break;	
			case 2:
				data = pop();
				printf("The deleted element is: %d\n", data);
				break;
			case 3:
				printf("The top element is %d\n", peek());
				break;
			case 4:
				print();
				break;
			case 5:
				exit(1);
			default:
				printf("Wrong input");
			
		}
	}
	return 0;
}