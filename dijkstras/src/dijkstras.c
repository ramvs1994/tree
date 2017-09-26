#include"header2.h"
#include"header1.h"


char *findmin(char **p) ;
void find_adj_nodes(char *q) ;

int sum ;

void dijkstras(char *start) 
{
	static int count ;
	int i;
	count = sum = 0 ;
	memset(adj, 0, sizeof(adj)) ;

	for(i=0 ; i<vertices ;i++) 
	{
		vertex_attr[i].key = INFINITY ;
		vertex_attr[i].parent = NULL ;
	}
	
	//struct vertex *start = arr[0] ;

	//int index = hash(start->node) ;

	int index = hash(start) ;

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
		if(min_node == NULL)  // traversal complete i.e all elements are dequeued 
			return ;
		int index = hash(min_node) ;
			
		
		if(vertex_attr[index].parent != NULL) 
		{
			
			 pmap[count].vertex = min_node ;
		 	 pmap[count].parent = vertex_attr[index].parent ; 
			 dmap[count].distance = vertex_attr[index].key ;
			 dmap[count].vertex = min_node ;
			 count++ ;
			sum = vertex_attr[index].key ;
		}
		else 
		{
			pmap[count].vertex = min_node ;
			pmap[count].parent = NULL ;
			dmap[count].vertex = min_node ;
			dmap[count].distance = 0 ;
			count++ ;
		}
		deque(min_node) ;
        	find_adj_nodes(min_node) ;

		while(adj[j].data != NULL)
		{
			
			index = hash(adj[j].data) ;
			if((lookfor(adj[j].data) >= 0) && (adj[j].weight + sum) < vertex_attr[index].key )
			{	
				vertex_attr[index].key = adj[j].weight + sum ;
				
				vertex_attr[index].parent = (char *)malloc(strlen(min_node)+1) ;
				strcpy(vertex_attr[index].parent, min_node) ;
			}
			j++ ;
		}
		
	}
}

/*struct adjacent* as return type earlier*/

void find_adj_nodes(char *ptr)
{
	int k=0 ;
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
		
		
		if ( ++k >= vertices)
	 	{
			printf("excess memory required to store more edges \n") ;
			break ;
		}
		
	}
	return  ;

}

char* findmin(char **Que) 
{
	int index, min = INFINITY, i ;
	char *p = NULL ;
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

	
