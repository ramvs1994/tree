#include"header2.h"


void Enqueue(char * x)
	{
		printf("Enqueuing %s \n",x);
		if(IsFull())
		{
			printf("Error: Queue is Full\n");
			return;
		}
		if (IsEmpty())
		{ 
			front = rear = 0 ; 
		}
		else
		{
		     rear = (rear+1)%MAX_SIZE ;
		}
		A[rear] = x;
	}


