/*************************************************************************
    > File Name: n.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 18 Nov 2015 09:15:28 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int A[100];
	int n, i, num = 0, value;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < n; i++)
	{
		if (num == 0)
		{
			value = A[i];
			num = 1;
		}
		else
		{
			if (value == A[i])
				num++;
			else
				num--;
		}
	}
	printf("%d\n", value);
}

