#include<stdlib.h>
#include<stdio.h>

typedef struct Tree
{
    int value;
    struct Tree *left;
    struct Tree *right;
} T;
T* root = NULL;

T* newNode(int item)
{
    T* temp = (T*)malloc(sizeof(T));
    temp->value = item;
    temp->left = temp->right = NULL;
    return temp;
}
T* insert(T* node, int value)
{
    if (node == NULL)
        return newNode(value);

    if (value < node->value)
        node->left = insert(node->left, value);
    else if (value > node->value)
        node->right = insert(node->right, value);

    return node;
}
void printLeftMostElm() {
	if(root == NULL) {
		printf("No binary tree exist");
		return;
	}
	T *ptr = root;
	while(ptr->right != NULL) {
		ptr = ptr->right;
	}
	
	printf("%d ", ptr->value);
}
int main()
{
    root = insert(root, 9);
    insert(root, 4);
    insert(root, 15);
    insert(root, 6);
    insert(root, 12);
    insert(root, 17);
    insert(root, 2);

    printLeftMostElm ();

    return 0;

}