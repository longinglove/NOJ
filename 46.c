/*************************************************************************
    > File Name: 46.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 19 Nov 2015 03:10:50 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	int A[100][100];
	int n, i, j, k;
	memset(A, 0, sizeof(int)*100*100);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			printf("  ");
		for (k = j; k < n; k++)
			printf("%d ", A[i][k]);
		printf("\n");
	}
	printf("\n");
	return 0;
}

