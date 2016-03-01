/*************************************************************************
    > File Name: 45.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 19 Nov 2015 09:42:01 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int a[100][100];
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

