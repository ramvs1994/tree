#include"header.h"

void preorder(struct node *root)
{
	if(root == NULL)
		return ;
	printf("%d\t",root->data) ;
	preorder(root->left) ;
	preorder(root->right) ;
	return ;
}
