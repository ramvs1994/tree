
#include"header2.h"

int lookfor(char *string)
{
	int i ;
	for(i=0 ; i <= rear ; i++)
	{
		if(A[i] == 0)
			continue ;
		if( !strcmp(A[i], string) )
			return i ;
	}
	return -1;
	
}
