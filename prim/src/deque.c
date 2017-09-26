
#include"header2.h"		
#include"header1.h"	


void deque(char *str)
{
	int index = hash(str) ;
	int i = lookfor(str) ;	
	A[i] = NULL ;
	vertex_attr[index].key = INFINITY ;
	printf("Dequeuing \n");
		if(IsEmpty())
		{
			printf("Error: Queue is Empty\n");
			return;
		}
		else if(front == rear ) 
		{
			rear = front = -1;
		}
		else
		{
			front = (front+1)%MAX_SIZE;
		}

}
