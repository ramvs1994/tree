#include"header.h"

int balance_factor(struct node *node) 
{
	if(node == NULL)
		return 0 ;

	else if(node->left == NULL  && node ->right == NULL)
			return 0;

	return height(node->left)-height(node->right) ;
}

