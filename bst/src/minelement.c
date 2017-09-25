#include"header.h"

struct node* minelement(struct node *root)
{
	if(root == NULL) {
		printf("tree is empty\n") ;
		return NULL ;
	}
	while(root->left != NULL)
		root = root->left ;
	return root ;
}
