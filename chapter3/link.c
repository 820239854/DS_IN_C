#include <stdio.h>
#include "./link.h"

link Reverse(link x)
{
	link t;
	link y=x;
	link r=NULL;
	while(y != NULL)
	{
		t = y->next;
		y->next = r;
		r = y;
		y = t;
	}
	return r;
}

void Traverse(link root)
{
	link p = root;
	while(p)
	{
		printf("%4d", p->item);
		p = p->next;
	}
}