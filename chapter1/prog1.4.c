#include <stdio.h>

#define N 10000

int main(int argc, char const *argv[])
{
	int p, q,id[N], sz[N];
	for (int i = 0; i < N; ++i)
	{
		id[i] = i;
		sz[i] = 1;
	}
	while(scanf("%d %d\n", &p, &q) == 2)
	{
		int i=p, j=q;
		while(i != id[i]){
			// Making each link skip to the next node int the path on the way up the tree
			int t = i;
			i = id[id[t]];
			id[t] = i;

			// On the way up to root
			i = id[i];
		}
		while(j != id[j]){
			int t = j;
			j = id[id[t]];
			id[t] = j;

			j = id[j];
		}
		if(i == j) continue;
		if (sz[i] < sz[j])
		{
			id[i] = j;
			sz[j] += sz[i];
		}
		else
		{
			id[j] = i;
			sz[i] += sz[j]; 
		}
		printf("%d %d\n", p, q);
	}
	return 0;
}