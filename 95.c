/*************************************************************************
    > File Name: 95.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Fri 27 Nov 2015 09:34:10 PM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int A[1000], M[1000], F[1000];
	int N, i;
	A[0] = 1;
	M[0] = 0;
	F[0] = 1;
	while (scanf("%d", &N) == 1)
	{
		if (N == -1)
			break;
		else
		{
			for (i = 1; i <= N; i++)
			{
				 F[i] = M[i-1]+1;
				 M[i] = A[i-1];
				 A[i] = F[i] + M[i];
			}
			printf("%d %d\n", M[N], A[N]);
		}
	}
	return 0;
}

