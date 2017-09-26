#ifndef __HEADER_H1
#define __HEADER_H1

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdint.h>
#define vertices 8


struct vertex {
	char *node ;
	int weight ;
	struct vertex *next ;	
} ;

struct vertex *arr[vertices] ;


//extern void find_adjacent_nodes(char * y) ;
extern void addvertex(char *x) ;
extern void addedge(char *x, char *y, int z) ;
extern int hash(char *x) ;
extern void display(void) ;


#endif
