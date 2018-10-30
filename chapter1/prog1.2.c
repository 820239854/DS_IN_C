#include <stdio.h>

#define N 10000

int main(int argc, char const *argv[])
{
	int p, q, id[N], sz[N];
	for (int i = 0; i < N; ++i)
	{
		id[i] = i;
		sz[i] = 1;
	}
	while(scanf("%d %d\n", &p, &q) == 2)
	{
		int i=p, j=q;

		while(i != id[i])
			i = id[i];
		while(j != id[j])
			j = id[j];

		if(i==j) continue;
		id[i] = id[j];
		printf("%d %d\n", p, q);
	}
	return 0;
}