/*************************************************************************
    > File Name: bubblesort.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 19 Nov 2015 09:46:39 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void BubbleSort(int A[], int s, int m);

int main()
{
	int A[100];
	int n, i, s, m;
	scanf("%d", &n);
	memset(A, 0, sizeof(int)*100);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	scanf("%d %d", &s, &m);
	BubbleSort(A, s, m);
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");
	return 0;
}

void BubbleSort(int A[], int s, int m)
{
	int i, j, temp;
	if (s > m)
		return;
	for (i = s; i <= m; i++)
	{
		for (j = s; j <= m - i; j++)
		{
			if (A[j] < A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}
