/*************************************************************************
    > File Name: 92.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Fri 27 Nov 2015 04:31:53 PM EST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
	int n, m, i;
	double result = 0, pos;
	while (scanf("%d %d", &n, &m) == 2)
	{
		if (m == 0 && n == 0)
			break;
		else
		{
			result = 0;
			for (i = 1; i < n; i++)
			{
				pos = (double)i/n*(n+m);
				result = result+fabs(pos-floor(pos+0.5))/(n+m);
			}
		}
		printf("%.4f\n", result*10000);
	}
	return 0;
}

