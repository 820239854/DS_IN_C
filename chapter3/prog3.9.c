#include <stdio.h>
#include <stdlib.h>

typedef struct node* link;

struct node
{
	int item;
	link next;
};

int main(int argc, char const *argv[])
{
	int N = atoi(argv[1]), M = atoi(argv[2]);
	link t = malloc(sizeof *t);
	link x = t;
	t->item = 1;
	t->next = t;

	for (int i = 2; i < N; ++i)
	{
		x->next = malloc(sizeof *t);

		x = x->next;
		x->item = i;
		x->next = t;
	}

	while(x != x->next)
	{
		for (int i = 1; i < M; ++i)
		{
			x = x->next;
		}
		x->next = x->next->next;
		N--;
	}

	printf("%d\n", x->item);
	return 0;
}