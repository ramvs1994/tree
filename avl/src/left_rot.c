#include"header.h"

struct node* left_rot(struct node *node)
{
	struct node *temp = node->right ;
	node->right = temp->left ;
	temp->left = node ;
	return temp ;
}
