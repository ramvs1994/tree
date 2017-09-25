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
			min->data = temp ;
			delete(min,value) ;
	//	root->right = delete(root->right,min->data);
		}

	}
	return root ;
}
