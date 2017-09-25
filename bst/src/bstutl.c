#include"header.h"

bool bstutl(struct node *root, int max, int min)
{
	if(root == NULL)
		return true ;
	if(root->data >= min && root->data < max
		&& bstutl(root->left, root->data, min) 
		&& bstutl(root->right, max, root->data)) 
		return true ;
	else
		return false ;
}
