/*************************************************************************
    > File Name: 87new.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 25 Nov 2015 11:19:44 AM EST
 ************************************************************************/

#include<stdio.h>

int func(int);

int main()
{
	int n;
	scanf("%d", &n);
	if (func(n))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

int func(int n)
{
	int i, m = 1, sum = 0;
	for (i = 1; i < 12; i++)
	{
		m *= i;
		sum += m;
		if (n == m)
			return 1;
		if (m > n)
			break;
	}
	if ((sum - m) < n)
		return 0;
	else
		return func(n - m/i);
}

