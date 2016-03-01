/*************************************************************************
    > File Name: 73.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 03 Dec 2015 03:05:34 PM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int n, A[1000], i, j, flag = 0;
	scanf("%d", &n);
	for (i = 0; ; i++)
	{
		scanf("%d", &A[i]);
		if (A[i] == 0)
			break;
	}
	for (i = 0; i < n - 1; i++)
	{
		j = i+1;
		if (A[i] > A[j])
		{
			if (A[i]-A[j] > 1)
			{
				flag = 1;
				printf("No\n");
				break;
			}
		}
	}
	if (!flag)
		printf("Yes\n");
	return 0;
}

