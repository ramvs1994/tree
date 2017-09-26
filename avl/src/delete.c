#include"header.h"
/* this function is to delete a node from the tree and balancing after deletion */ 
struct node* delete(struct node *root, int value)
{
	struct node *min ;
	if(root == NULL) 
		return root ;
	else if(value < root->data)
		root->left = delete(root->left, value) ;
	else if(value > root->data)
		root->right = delete(root->right, value) ;
	else {
	
		if(root->left == NULL && root->right == NULL)	{
			free(root) ;
			root = NULL ;
		} else if (root->left == NULL) {
			struct node *temp = root ;
			root = root->right ;		
			free(temp) ;	
		} else if (root->right == NULL)	 {
			struct node *temp = root ;
			root = root->left  ;
			free(temp) ;
		} else {
			min = minelement(root->right) ;
			int temp = root->data ;
			root->data = min->data ;
		//	min->data = temp ;
		//	delete(min,value) ;
		root->right = delete(root->right,min->data);
		}
	return root ;

	}

	int balance_fact,ht_lst,ht_rst ;
//	ht_lst = height(root->left) ;
//	ht_lst = height(root->right) ;
	balance_fact = balance_factor(root) ;   /* calculating balance factor of current node */
	
	if((balance_fact > 1) && (balance_factor(root->left) >=0))   /* condition for left left imbalance */
		return right_rot(root) ;		/*correcting left left error by right rotating */	

	if((balance_fact > 1) && (balance_factor(root->left) == -1)) {   /* condition for left right imbalance  */
		root->left = left_rot(root->left) ;	/* correcting left right error by left rotation and the right rotation*/
		return right_rot(root) ;
	}
	
	if((balance_fact < -1) && (balance_factor(root->right) <= 0)) /*condition for right right imbalance */
		return left_rot(root) ;			/* correcting right right error by left rotation */

	if(balance_fact < -1 &&(balance_factor(root->right)> 0)) { /*condition for right left imbalance */
		root->right = right_rot(root->right) ; /* correcting right left error right rotation followed by left rotation */
		return left_rot(root) ;
	}

	return root ;
}


