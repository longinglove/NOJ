/*************************************************************************
    > File Name: 79.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 03 Dec 2015 11:41:08 AM EST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, x, i, j, num = 0, total, flag = 0;
	int A[20], B[50];
	scanf("%d %d", &n, &x);
	total = n;
	for (i = 0; i < 20; i++)
		scanf("%d", &A[i]);
	for (i = 1; i <= n; i++)
		B[i] = 1;
	for (i = 0; i < 20; i++)
	{
		num = 0;
		for (j = 1; j <= n; j++)
		{
			if (B[j] == 1)
			{
				num++;
				if (num == A[i])
				{
					B[j] = 0;
					total--;
					num = 0;
					if (total == x)
					{
						flag = 1;
						break;
					}
				}
				else
					continue;
			}
			else
				continue;
		}
		if (flag)
			break;
	}
	for (i = 1; i <= n; i++)
	{
		if (B[i] == 1)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}

