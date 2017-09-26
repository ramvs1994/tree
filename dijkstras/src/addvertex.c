#include"header1.h"

void addvertex(char *node)
{
	int index = hash(node) ;

	if(arr[index] == NULL) {
		arr[index] = (struct vertex *)malloc(sizeof(struct vertex)) ;
		if(arr[index] == NULL) {
			printf("malloc returned null\n") ;
			exit(1) ;
		}
		memset(arr[index], 0, sizeof(struct vertex)) ;
		arr[index]->node = (char *)malloc(strlen(node)+1) ;
		strcpy(arr[index]->node, node) ;	
		arr[index]->next == NULL ;	
		
	}
}

