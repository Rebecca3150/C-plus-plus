#include "gongYueAndBei.h"

void gongYueAndBei(int m, int n, int *p, int *q)
{
	int minValue = m < n ? m:n;
    
	int i;
	for(i= minValue;  ; i--)
		if(m % i == 0 && n % i == 0)
			break;
    *p = i;
	*q = m * n / i;
}