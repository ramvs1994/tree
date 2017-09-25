
#include"header.h"

bool isbst(struct node *root)
{
	return bstutl(root, INT_MAX, INT_MIN) ;
}
