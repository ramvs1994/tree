#include"header.h"

void inorder(struct node *root)
{
	if((root == NULL))
		return ;
	inorder(root->left) ;
	printf("%d\t",root->data) ;
	inorder(root->right);
	return ;
}
