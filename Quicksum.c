/*************************************************************************
    > File Name: Quicksum.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 25 Nov 2015 10:38:05 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char A[300];
	int sum = 0, i, j, temp;
	memset(A, 0, 300);
	while (fgets(A, 300, stdin) != NULL)
	{
		A[strlen(A)-1] = 0;
		if (strlen(A) == 1 && A[0] == '#')
			break;
		else
		{
			sum = 0;
			for (i = 0; i < strlen(A); i++)
			{
				if (A[i] == ' ')
					continue;
				else
					sum += (A[i] - 64) * (i + 1);
			}
			printf("%d\n", sum);
		}
		memset(A, 0, 300);
	}
	return 0;
}

