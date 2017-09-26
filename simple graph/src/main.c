

#include"header.h"
#define MAX_NODE_NAME 20

int main()
{
	int choice , weight;
	
	char node1[MAX_NODE_NAME], node2[MAX_NODE_NAME];
	
	while(1)
	{
		printf("___MENU___\n"); 
		printf("\n1. add node to graph \n2. add edge  \n3. display all nodes and their edges\n4. Exit\n");
		printf("enter ur choice : ") ;
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: while(1) {
				printf("Enter node name or \"end\" to stop : ");
				scanf(" %s", node1);
				if(!strcmp(node1,"end"))
					break ;
				addvertex(node1);
				}
				break;

			case 2:
				printf("Enter nodes and weight of edge: ");
				scanf(" %s %s %u",node1,node2,&weight);
				addedge(node1,node2,weight) ;
				break;

			case 3:
				display() ;
				break ;

			case 4:
				exit(0);
				break;
			
			default: 
				printf("wrong choice ! try again\n");
				break;
		}

	}
	
	return 0 ;
}
