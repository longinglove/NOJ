/*************************************************************************
    > File Name: card.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 25 Nov 2015 09:38:56 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	double input, sum = 0;
	int n, i, result = 1;
	scanf("%lf", &input);
	for (i = 2; ;i++, result++)
	{
		sum += 1.0/i;
		if (sum >= input)
			break;
	}
	printf("%d\n", result);
	return 0;
}

