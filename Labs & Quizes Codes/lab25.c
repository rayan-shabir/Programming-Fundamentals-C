#include <stdio.h>
#include <stdlib.h>


#define ME 5
typedef struct record {
	long i;
}RE;

//The stack is stored using the following variable.
RE *stack = NULL;
//It tells that what is the size of stack in memory.
int size = 0;

/*
* It tells that how many elements are in the stack.
* elements in the stack cannot be more than or equal to its size.
*/
int elmCount = 0;

void incMem() {
    if (stack == NULL) {
        stack = malloc (ME*sizeof(RE));
        size = size +ME;
    }
    else if(size == elmCount) {
        stack = realloc (stack,(ME+size)*sizeof(RE));
        size = size +ME;
    }
}

void push(long l) {
	/*
	Step 1: Check if the stack is full or null. If so then reserve
	another block of ME elements. ME is defined above as 5. 
	Increment the size variable accordingly.
	*/
    incMem();
    

	/*
	Step 2: add element in the stack.
	*/

    RE d;
    d.i = l;
    stack[elmCount] = d;

	/*
	Step 3: increment the elmCount variable accordingly.
	*/
	elmCount ++;
}

/*
* Returns element at the top of stack. Returns -1 when the stack is empty.
*/
long pop() {
	/* 
	Step 1: check if the stack is empty. If so then return -1.
	*/
     if(elmCount == 0) {
        return -1;
     }
	/*
	  stack is empty.
	*/
	/*
	Step 2: put an element in the stack.
	*/
    long l;                                                 
    l = stack[elmCount].i;
	/*
	Step 3: decrement elmCount
	*/
    elmCount --;
    return l;
}


/*
* It prints all elements in the stack.
*/
void printStack() {
	for(int i=0; i<elmCount; i++) {
        printf("\n%ld", stack[i].i);
    }
   
}

int main() {
	push(9);
	push(11);
	push(21);
	pop();
	push(29);
	printStack();
	return 0;
}