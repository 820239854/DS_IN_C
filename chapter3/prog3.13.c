#include <stdio.h>
#include <stdlib.h>
#include "./link.h"

int main(int argc, char const *argv[])
{
	// int N = atoi(argv[1]);
	link r;
	for (int i = 0; i < N; ++i)
	{
		link p = malloc(sizeof *p);
		p->item = i;
		p->next = (i==0)? NULL : r; 
		r = p;
	}

	Traverse(r);
	// Traverse(Reverse(r));
	return 0;
}