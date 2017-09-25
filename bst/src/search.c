#include"header.h"

void search(struct node *root, int value)
{
	if(root == NULL) {
		printf("tree is empty\n") ;
		return ;

	} else if(value < root->data) {
	
		search(root->left, value);
	} else if(value > root->data) {
		
		search(root->right, value) ;
	} else 
		
		printf("value found at root = %p, data = %d\n",root,root->data) ;
		return ;
	
}
