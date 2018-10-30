#ifndef LINK_H
#define LINK_H 

typedef struct node* link;
struct node
{
	int item;
	link next;
};

#endif
