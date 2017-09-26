#include"header.h"

void display()
{
	int i ;
	struct vertex *temp ;
	
	for(i=0 ; i<vertices ; i++) 
	{
		if(arr[i] == NULL)
			 continue ;
		printf("Adjacent vertices of vertex %s are : ",arr[i]->node) ;

		if(( temp = arr[i]->next ) == NULL)
			printf("no adjacent nodes\n");
		while(temp != NULL) {
			printf("%s\t",temp->node) ;
			temp = temp->next ;
		}
		printf("\n") ;
	}
	
	return ;

}
