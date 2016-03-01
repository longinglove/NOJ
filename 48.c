/*************************************************************************
    > File Name: 48.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 19 Nov 2015 03:26:20 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	int A[100][100];
	int n, m, i, j, s1 = 0, s2 = 0;
	memset(A, 0, sizeof(int)*100*100);
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &A[i][j]);
	for (i = 0; i < m; i++) {
		s1 += A[0][i];
		s1 += A[n-1][i];
	}
	s1 = s1 - A[0][0] - A[0][m-1] - A[n-1][0] - A[n-1][m-1];
	for (i = 0; i < n; i++) {
		s1 += A[i][0];
		s1 += A[i][m-1];
	}
	for (i = 1; i < n - 1; i++)
		for (j = 1; j < m - 1; j++)
			s2 += A[i][j];
	printf("%d\n", s1 - s2);
	return 0;
}

