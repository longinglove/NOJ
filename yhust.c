/*************************************************************************
    > File Name: yhust.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 21 Jan 2016 06:11:18 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int a, b;
	while (~scanf("%d %d", &a, &b))
	{
		if (a == b)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

