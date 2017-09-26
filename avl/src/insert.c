#include"header.h"
/* this function is to insert a node into the tree structure and check for balacing after insertion by traversing back */
struct node *insert(struct node *root, int value)
{
	if(root == NULL) {
		root = (struct node *)malloc(sizeof(struct node)) ;
		root->data = value ;
		root->left = NULL ;
		root->right = NULL ;
		return root ;
/* traverse recurrsivly till suitable place as per BST norms is found */
	} else if(root->data >= value) { 
		
		root->left = insert(root->left, value) ;	

	} else {

		root->right = insert(root->right, value) ;		
	}

	int balance_factor,ht_lt,ht_rt ;

	ht_lt = height(root->left) ;
	ht_rt = height(root->right) ;
	balance_factor = ht_lt - ht_rt ; /* calculating the balance factor for current node */

	if((balance_factor > 1) && (value < root->left->data))  /* left left imbalance condition*/
		
		return right_rot(root) ;			/* correcting left left imbalance by right rotation*/

	if((balance_factor < -1) && (value > root->right->data)) /* right rigth imbalance condition */
		return left_rot(root) ;			/* correcting right rigth imbalance by left rotation */

	if((balance_factor > 1) && (value > root->left->data)) { /* left right imbalance condition */

		root->left = left_rot(root->left) ; /* correcting left right imbalance by left rotation and then right rotation */
		return right_rot(root) ;
	}

	if((balance_factor < -1 && value < root->right->data)) { /* right left imbalance condition */
		
		root->right = right_rot(root->right) ; /*correction for right left imbalance by right rotation and then left rotation */
		return left_rot(root) ;
	}


	return root ;	

}
