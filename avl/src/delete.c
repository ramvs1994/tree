#include"header.h"

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
	balance_fact = balance_factor(root) ;
	
	if((balance_fact > 1) && (balance_factor(root->left) >=0))
		return right_rot(root) ;

	if((balance_fact > 1) && (balance_factor(root->left) == -1)) {
		root->left = left_rot(root->left) ;		
		return right_rot(root) ;
	}
	
	if((balance_fact < -1) && (balance_factor(root->right) <= 0)) 
		return left_rot(root) ;

	if(balance_fact < -1 &&(balance_factor(root->right)> 0)) {
		root->right = right_rot(root->right) ;
		return left_rot(root) ;
	}

	return root ;
}


