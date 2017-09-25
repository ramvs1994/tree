#include<stdio.h>
#include"header.h"

int main()
{

	struct node *root = NULL ;
	struct node *min = NULL ;
	int data, choice;
	
	while(1)
	{
		printf("___MENU___\n") ;
		printf("1.insert\n2.delete\n3.display\n4.search\n5.find minimum element in tree\n6.exit\n\nenter ur choice : ") ;
		scanf("%d",&choice) ;
		
		switch(choice)
		{
			case 1 :
				while(1) { 
					printf("enter data or enter -1 to stop\n") ;
					scanf("%d",&data) ;
					if(data == -1)
					break ;
					root = insert(root,data) ;
				}
				break ;
			case 2:
				printf("enter data to be deleted\n") ;
				scanf("%d",&data) ;
				root = delete(root,data) ;
				break ;
			case 3:
				printf("preorder\n") ;
				preorder(root) ;
				printf("\n") ;
				printf("postorder\n") ;
				postorder(root) ;
				printf("\n") ;
				printf("inorder\n") ;
				inorder(root) ;
				printf("\n") ;
				break ;
			case 4: 
				printf("enter data to be searched : ") ;
				scanf("%d",&data) ;
				search(root,data) ;
				break ;
			case 5:
				min = minelement(root);
				if(min)
				printf("minimum element is %d\n",min->data) ;
				break ;
			case 6:
				exit(0);
				break ;
			default :
				 printf("wrong choice ! try again\n") ;
		}
	}

	return 0;
	
}
