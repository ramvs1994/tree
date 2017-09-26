#include"header1.h"

#include"header2.h"

#define MAX_NODE_NAME 20



int main()
{
	front= rear = -1 ;
	int choice , weight ,l;
	
	char node1[MAX_NODE_NAME], node2[MAX_NODE_NAME];
	
	while(1)
	{
		printf("___MENU___\n"); 
		printf("\n1. add node to graph \n2. add edge  \n3. display all nodes and their edges\n4. dijkstras\n5. Exit\n5. \n");
		printf("enter ur choice : ") ;
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: 
				while(1) {
					printf("Enter node name or \"end\" to stop : ");
					scanf(" %s", node1);
					if(!strcmp(node1,"end"))
						break ;
					addvertex(node1);
				}
				break;

			case 2:
				while(1) {
					printf("Enter nodes and weight of edge or NULL to stop : ");
					scanf(" %s %s %u",node1,node2,&weight);
					if( !(strcmp(node1, "NULL") && strcmp(node2, "NULL"))) 
						break ;
					addedge(node1,node2,weight) ; 
				}
				break;

			case 3:
				display() ;
				break ;
			
			case 4:
				printf("enter the start node : ") ;
				scanf(" %s",node1) ;
				dijkstras(node1) ;
				printf("__DISTANCE MAP__\n") ;
				for(l =0 ;dmap[l].vertex != NULL ; l++)
					printf("%s\t%d\n",dmap[l].vertex, dmap[l].distance) ;
				
				printf("__PARENT MAP__\n") ;
				for(l=0 ;pmap[l].vertex != NULL ;l++)
					printf("%s\t%s\n",pmap[l].vertex,pmap[l].parent) ;

				break ;
			case 5:
				exit(0);
				break;

			default: 
				printf("wrong choice ! try again\n");
				break;
		}

	}
	
	return 0 ;
}


/*
struct vertex* create_graph(int num)
{
	struct vertex *temp=(struct vertex *)malloc(sizeof(struct vertex)*num);
	memset(temp, 0, sizeof(temp)) ;
	return temp;
}

*/


