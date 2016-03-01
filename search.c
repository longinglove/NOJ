/*************************************************************************
    > File Name: search.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Sat 21 Nov 2015 10:58:31 AM EST
 ************************************************************************/

#include<stdio.h>

int search(int A[], int n, int m);

int main() 
{
	int A[100];
	int i, n, m;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	scanf("%d", &m);
	printf("%d\n", search(A, n, m));
	return 0;
} 

int search(int A[], int n, int m)
{
	int low, mid, high, i;
	low = 0;
	high = n - 1;
	while (low <= high)
	{
		
		mid = (low+high)/2;
		if (A[mid] > m)
			high = mid;
		else if (A[mid] < m)
			low = mid;
		else
			return mid;
	}
}
