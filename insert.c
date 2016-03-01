/*************************************************************************
    > File Name: insert.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 17 Nov 2015 03:26:28 PM EST
 ************************************************************************/

#include<stdio.h>

int min(int A[], int start, int end);

int main()
{
	int A[100];
	int n, temp, i, j, num = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < n; i++)
	{
		j = min(A, i, n-1);
		if (A[i] > A[j])
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			num++;
		}
	}
	printf("%d\n", num);
	return 0;
}

int min(int A[], int start, int end)
{
	int temp, min = 100, i;
	for (i = start; i <= end; i++)
	{
		if (A[i] < min)
			min = A[i];
	}
	for (i = start; i <= end; i++)
		if (A[i] == min)
			return i;
}

