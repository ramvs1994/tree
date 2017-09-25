#include"header.h"

int height(struct node *root)
{
		if(root == NULL)
			return -1;
		int left, right ;
	left = height(root->left) ;	
	right =	height(root->right) ;
	return ((left > right ? left : right ) + 1 ) ;
		
}



