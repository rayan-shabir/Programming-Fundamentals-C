#include <stdio.h>
#include <stdlib.h>

typedef struct binaryTree {
	int data;	
	struct binaryTree *left;
	struct binaryTree *right;
}BT;

void addchild(int ld, int rd, BT *parent) {
	BT *left = malloc(sizeof(BT));
	BT *right = malloc(sizeof(BT));
	
	left->data = ld;
	right->data = rd;
	
	parent->left = left;
	parent->right = right;

}

void print(BT *parent) {
	BT *ptr = malloc(sizeof(BT));
	ptr = parent;
	while (ptr != NULL) {
		printf("\t       |%d|\n", ptr->data);
		printf("\t |%d|         |%d|\n", ptr->left->data, ptr->right->data);
		break;
	}
	printf("    |%d|      |%d|", ptr->left->left->data, ptr->left->right->data);
	printf(" |%d|      |%d|", ptr->right->left->data, ptr->right->right->data);
}

int main() {
	BT *parent = NULL;
	parent = malloc(sizeof(BT));
	parent->data = 1;
	
	addchild(2, 3, parent);
	addchild(4, 5, parent->left);
	addchild(6, 7, parent->right);
	print(parent);
	return 0;
}