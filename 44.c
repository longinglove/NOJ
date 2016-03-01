/*************************************************************************
    > File Name: 44.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 17 Nov 2015 03:41:57 PM EST
 ************************************************************************/

#include<stdio.h>

void Quicksort(int A[100], int s, int m);

int main()
{
	int A[100];
	int i, n, s, m;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	scanf("%d %d", &s, &m);
	Quicksort(A, s, m);
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");
	return 0;
}

void Quicksort(int A[100], int s, int m)
{
	int i, j, key, temp;
	i = s;
	j = m;
	key = A[s];
	if (s >= m)
		return;
	while (i < j)
	{
		while (i < j && key >= A[j])
			j--;
		while (i < j && key <= A[i])
			i++;
		if (i < j)
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	A[s] = A[i];
	A[i] = key;
	Quicksort(A, s, i - 1);
	Quicksort(A, i + 1, m);
	return;
}
