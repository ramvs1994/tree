#include"header.h"

void postorder(struct node *root)
{
	if(root == NULL)
		return ;
	postorder(root->left) ;
	postorder(root->right) ;
	printf("%d\t",root->data) ;
	return ;
}
