#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	long i,j;
	long N = atoi(argv[1]);
	int *a = malloc(N*sizeof(int));

	for (i = 2; i < N; ++i)
	{
		a[i] = 1;
	}
	for (i = 2; i < N; ++i)
	{
		if(a[i])
		{
			for(j=i; j<N/j; ++j)
				a[i*j] = 0;
		}
	}
	for (i = 2; i < N; ++i)
	{
		if(a[i])
			printf("%4ld ", i);
	}
	printf("\n");
	return 0;
}