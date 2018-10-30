#include <stdio.h>

int search(int a[], int v, int l, int r){
	for (int i = 1; i < r; ++i)
	{
		if(v==a[i])
			return i;
		return -1;
	}
}
