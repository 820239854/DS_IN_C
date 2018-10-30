#include <stdio.h>

int search(int a[], int v, int l, int r){
	while(l <= r){
		int m = (l+m)/2;
		
		if(v == a[m]) 
			return m;

		if(v < a[m])  
			r = m-1;
		else 
			l = m+1;
	}
	return -1;
}
