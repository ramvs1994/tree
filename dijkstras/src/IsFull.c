#include"header2.h"

bool IsFull()
	{
		return (rear+1)%MAX_SIZE == front ? true : false;
	}
