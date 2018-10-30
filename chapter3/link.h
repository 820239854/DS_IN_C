#ifndef LINK_H
#define LINK_H 

#define N 5

typedef struct node* link;

typedef struct node
{
	int item;
	link next;
}node;

void Traverse(link);
link Reverse(link x);

#endif
