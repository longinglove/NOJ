/*************************************************************************
    > File Name: pointtest.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 18 Nov 2015 10:13:48 PM EST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	int a[100], i, *b;
	memset(a, 0, sizeof(int)*100);
	b = a;
	*b++;
	printf("%d\n", *b);
	return 0;
}

