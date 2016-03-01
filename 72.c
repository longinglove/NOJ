/*************************************************************************
    > File Name: 72.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 24 Nov 2015 03:02:03 PM EST
 ************************************************************************/

#include<stdio.h>

int num = 0;
void BubbleSort(int A[], int s, int m);

int main()
{
	int A[100], n, s, m, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	BubbleSort(A, 0, n);
	printf("%d\n", num);
	return 0;
}

void BubbleSort(int A[], int s, int m)
{
	int i, j, temp;
	for (i = 0; i < m - s; i++)
	{
		for (j = 0; j < m - i - 1; j++)
		{
			if (A[j] > A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				num++;
			}
		}
	}
}
