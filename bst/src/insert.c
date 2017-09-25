#include"header.h"

struct node *insert(struct node *root, int value)
{
	if(root == NULL) {
		root = (struct node *)malloc(sizeof(struct node)) ;
		root->data = value ;
		root->left = NULL ;
		root->right = NULL ;
		return root ;

	} else if(root->data >= value) {
		
		root->left = insert(root->left, value) ;	

	} else {

		root->right = insert(root->right, value) ;		
	}

	return root ;	
}
