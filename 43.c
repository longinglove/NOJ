/*************************************************************************
    > File Name: 43.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 17 Nov 2015 02:17:32 PM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int A[100];
	int n, i, j, num = 0, temp;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (A[j+1] < A[j])
			{
				temp = A[j+1];
				A[j+1] = A[j];
				A[j] = temp;
				num++;
			}
		}
	}
	printf("%d\n", num);
	return 0;
}

