#include"header.h"

struct node *insert(struct node *root, int value)
{
	if(root == NULL) {
		root = (struct node *)malloc(sizeof(struct node)) ;
		root->data = value ;
		root->left = NULL ;
		root->right = NULL ;
		return root ;

	} else if(root->data >= value) {
		
		root->left = insert(root->left, value) ;	

	} else {

		root->right = insert(root->right, value) ;		
	}

	int balance_factor,ht_lt,ht_rt ;

	ht_lt = height(root->left) ;
	ht_rt = height(root->right) ;
	balance_factor = ht_lt - ht_rt ;

	if((balance_factor > 1) && (value < root->left->data))
		
		return right_rot(root) ;

	if((balance_factor < -1) && (value > root->right->data))
		return left_rot(root) ;

	if((balance_factor > 1) && (value > root->left->data)) {

		root->left = left_rot(root->left) ;
		return right_rot(root) ;
	}

	if((balance_factor < -1 && value < root->right->data)) {
		
		root->right = right_rot(root->right) ;
		return left_rot(root) ;
	}


	return root ;	

}
