/*************************************************************************
    > File Name: hailstone.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 25 Nov 2015 09:20:38 AM EST
 ************************************************************************/

#include<stdio.h>

int func(int);

int main()
{
	int i, j, num = 0, n;
	scanf("%d %d", &i, &j);
	for (n = i; n <= j; n++) {
		if (num > func(n))
			continue;
		else
			num = func(n);
	}
	printf("%d %d %d\n", i, j, num);
	return 0;
}

int func(int n)
{	
	int i, value;
	value = n;
	for (i = 0; ;i++)
	{
		if (value == 1)
		{
			i++;
			break;
		}
		else if (value%2 != 0)
			value = 3*value + 1;
		else
			value = value / 2;
	}
	return i;
}
