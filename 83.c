/*************************************************************************
    > File Name: 83.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 24 Nov 2015 03:20:22 PM EST
 ************************************************************************/

#include<stdio.h>

void bubblesort(int A[], int n);

int main()
{
	int w, n, a[300], num = 0, i, j, temp;
	scanf("%d %d", &w, &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	bubblesort(a, n);
	num = n;
	for (i = 0; i < num; i++)
	{
		for (j = num - 1; j > i; j--)
		{
			if (a[i] + a[j] <= w)
			{
				j--;
				num--;
				break;
			}
		}
	}
	printf("%d\n", num);
	return 0;
}

void bubblesort(int A[], int n)
{
	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (A[j] > A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}
