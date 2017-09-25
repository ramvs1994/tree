#include"header.h"

struct node* right_rot(struct node *node)
{
	struct node *temp = node->left ;
	node->left = temp->right ;
	temp->right = node ;
	return temp ;

}
