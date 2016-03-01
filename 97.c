/*************************************************************************
    > File Name: 97.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Sat 28 Nov 2015 11:42:31 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int n, s, t, pret = 0, sum = 0;
	while (scanf("%d", &n) == 1)
	{
		if (n == -1)
			break;
		else
		{
			sum = 0;
			pret = 0;
			while (n--)
			{
				scanf("%d %d", &s, &t);
				sum += s*(t-pret);
				pret = t;
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}

