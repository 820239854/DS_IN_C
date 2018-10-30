#include <stdio.h>

#define N 10000

int main(int argc, char const *argv[])
{
	int i, p, q, t, id[N];
	for (int i = 0; i < N; ++i)
	{
		id[i] = i;
	}
	while(scanf("%d %d\n", &p, &q) == 2)
	{
		if (id[p] == id[q])
		{
			continue;
		}
		for (int i = 0; i < N; ++i)
		{
			if(id[i] == id[p])	
				id[i] = id[q];
		}
		printf("%d %d\n", p, q);
	}
	return 0;
}