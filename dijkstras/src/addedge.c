
#include"header1.h"

void addedge(char *start, char *end, int weight) 
{
	int index = hash(start) ;
	
	if(arr[index] == NULL) {
		printf(" no node/vertex with name %s\n",start) ;
		return ;
	}
	
       struct vertex *temp = arr[index] ;
       while(temp->next != NULL) 
      		 temp = temp->next ;
                
       temp->next = (struct vertex *)malloc(sizeof(struct vertex)) ;
	temp = temp->next ;      
	 if(temp == NULL) {
                 printf("malloc returned null\n") ;
                 exit(1) ;
       }       
       memset(temp, 0, sizeof(struct vertex)) ;
       temp->weight = weight ;
       temp->node = (char *)malloc(strlen(end)+1) ;
       strcpy(temp->node, end) ;
       temp->next == NULL ;
        
       
	return ;
		

}
