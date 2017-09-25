#include"header.h"

struct node* minelement(struct node *root)
{
	if(root == NULL) 
		return NULL ;
	while(root->left != NULL)
		root = root->left ;
	return root ;
}
