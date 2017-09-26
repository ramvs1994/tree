#include"header2.h"
#include"header1.h"


char *findmin(char **p) ;
void find_adj_nodes(char *q) ;



void funct() 
{
	int i;
	static int count ;
	count = 0;	
	memset(adj, 0, sizeof(adj)) ;

	for(i=0 ; i<vertices ;i++) 
	{
		vertex_attr[i].key = INFINITY ;
		vertex_attr[i].parent = NULL ;
	}
	
	struct vertex *start = arr[0] ;

	int index = hash(start->node) ;

	vertex_attr[index].key = 0 ;
	vertex_attr[index].parent =  NULL ;

	for(i=0 ; i<vertices ; i++)
	{
		if(arr[i] == NULL)
			continue ;
		Enqueue(arr[i]->node) ;
	}

	while(!(IsEmpty())) 
	{
		
		int j=0 ;
		char *min_node = findmin(A) ;
		int index = hash(min_node) ;
	
		
		if(vertex_attr[index].parent != NULL) 
		{
			 list[count].end = min_node ;
		 	 list[count].start = vertex_attr[index].parent ; 
			 list[count].weight = vertex_attr[index].key ;
			 count++ ;
		}
		deque(min_node) ;
        	find_adj_nodes(min_node) ;

		while(adj[j].data != NULL)
		{
			index = hash(adj[j].data) ;
			if((lookfor(adj[j].data) > 0) && adj[j].weight < vertex_attr[index].key )
			{
				vertex_attr[index].key = adj[j].weight ;
				vertex_attr[index].parent = (char *)malloc(strlen(min_node)+1) ;
				strcpy(vertex_attr[index].parent, min_node) ;
			}
			j++ ;
		}
		//deque(min_node) ;
	}
}


void find_adj_nodes(char *ptr)
{
	int k=0;
	int index = hash(ptr) ;
	struct vertex *temp = arr[index] ;
	if( strcmp(arr[index]->node,ptr)) 
		printf("something is going wrong here in find_adj_nodes \n");
	if(temp->next == NULL) 
	{
		printf("graph is not connected ! MST not possible\n") ;
		return ;
	}
	temp =temp->next ;
	memset(adj, 0 ,sizeof(adj)) ;
	while(temp != NULL)
	{
		
		adj[k].data = (char *)malloc(strlen(temp->node)+1) ;
		strcpy(adj[k].data,temp->node) ;
		adj[k].weight=temp->weight ;
		temp=temp->next ;
		if ( ++k >= vertices/2)
	 	{
			printf("excess memory required to store more edges \n") ;
			break ;
		}
	}
	return  ;

}

char* findmin(char **Que) 
{
	int index, min = INFINITY, i;
	char *p ;
	for( i=0 ; i<MAX_SIZE ; i++ ) 
	{
		if(Que[i] == NULL) 
			continue ;
		index  = hash(Que[i]) ;
		if( min >  vertex_attr[index].key )
			{
				min = vertex_attr[index].key ;
				p = Que[i] ;	
						
			}	
	}
	return p ;

}

	
