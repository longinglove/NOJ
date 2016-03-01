/*************************************************************************
    > File Name: 42.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Mon 16 Nov 2015 10:37:59 PM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int A[100][100];
	int i, j, n, k;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = n - i - 1; j >= 0; j--)
			printf("  ");
		for (k = n - i - 1; k < n; k++)
			printf("%d ", A[i][k]);
		printf("\n");
	}
	return 0;
}

