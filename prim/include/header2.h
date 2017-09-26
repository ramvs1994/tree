#ifndef __HEADER_H2
#define __HEADER_H2
#include<stdio.h>
#include<stdbool.h>
#include<string.h>


#define MAX_SIZE 10
#define vertices 8
#define INFINITY 9999999

struct edge {
	
	char *start ;
        char *end ;
        int weight ;
};

struct vertex_attr {
        int key ;
        char *parent ;
} ;



struct adjacent {
        char *data ;
        int weight ;
} ;


struct edge list[vertices] ;
struct adjacent adj[vertices/2] ;
struct vertex_attr vertex_attr[vertices] ;
  
char *A[MAX_SIZE];

 int rear ;
 int front;

extern void funct(void) ;
extern bool IsEmpty() ;	
extern bool IsFull() ;
extern void Enqueue(char *x) ;
extern int lookfor(char *y) ;
extern void deque(char *z) ;

#endif
