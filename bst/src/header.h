#ifndef __HEADER_H1
#define __HEADER_H1
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

struct node {
	int data ;
	struct node *left ;
	struct node *right ;
};

extern struct node* insert(struct node *r, int val) ;
extern void inorder(struct node *r) ;
extern void preorder(struct node *r) ;
extern void postorder(struct node *r) ;
extern void search(struct node *r, int val) ;
extern struct node* minelement(struct node *r) ;
extern bool isbst(struct node *x) ;
extern bool bstutl(struct node *x, int y, int z) ;
extern int height(struct node *r) ;
extern struct node* delete(struct node* x, int y) ;

#endif
