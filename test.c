/*************************************************************************
    > File Name: test.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 18 Nov 2015 09:56:07 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	int A[100];
	int n, i, temp, num = 0;
	memset(A, 0, sizeof(int)*100);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < n; i++)
	{
		if (num == 0)
		{
			temp = A[i];
			num++;
		}
		else
		{
			if (temp == A[i])
				num++;
			else
				num--;
		}
		printf("%d\n", num);
	}
	printf("%d\n", temp);
	return 0;
}

