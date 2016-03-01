/*************************************************************************
    > File Name: 87.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 25 Nov 2015 10:55:34 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int A[10] = {0};
	int i, j, sum = 0, fact = 1, input, flag = 0;
	scanf("%d", &input);
	for(i = 1; i < 10; i++)
	{
		fact = 1;
		for (j = 1; j <= i; j++)
			fact *= j;
		A[i-1] = fact;
	}
	for (i = 0; i < 9; i++)
	{
		sum = 0;
		for (j = i; j < 9; j++) {
			sum += A[j];
			if (sum == input)
			{
				flag = 1;
				break;
			}
			else if (sum < input)
				continue;
			else
				break;
		}
	}
	if (flag)
		printf("YES\n");
	else
		printf("NO\n");
}

