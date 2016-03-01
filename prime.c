/*************************************************************************
    > File Name: prime.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 26 Nov 2015 10:03:14 AM EST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int A[10001];
void Prime();

int main()
{
	int m, n, i, num;
	scanf("%d %d", &m, &n);
	A[1] = 2;
	A[2] = 3;
	Prime(m, n);
	for (i = m; i <= n; i++)
	{
		if ( i == m)
		{
			printf("%d", A[i]);
			continue;
		}
		if ((i - m) % 10 != 0)
			printf(" %d", A[i]);
		else
		{
			printf("\n%d", A[i]);
		}
	}
	printf("\n");
	return 0;
}

void Prime()
{
	int i, j, k;
	for (i = 4, j = 3; j < 10001; i++)
	{
		for (k = 2; k <= (int)sqrt(i); k++)
		{
			if (i % k == 0)
				break;
			if (k == (int)sqrt(i))
			{
				A[j] = i;
				j++;
				break;
			}
		}
	}
}

