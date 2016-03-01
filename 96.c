/*************************************************************************
    > File Name: 96.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Sat 28 Nov 2015 12:14:29 PM EST
 ************************************************************************/

#include<stdio.h>

int func(int);

int main()
{
	int n;
	while (scanf("%d", &n) == 1)
	{
		if (n == 0)
			break;
		else
		{
			printf("%d\n", func(n));
		}
	}
	return 0;
}

int func(int n)
{
	int num = 0, i;
	for (i = n; i >= 1; i = i/2)
		num++;
	return num;
}
