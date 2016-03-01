/*************************************************************************
    > File Name: pat.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Mon 23 Nov 2015 03:34:25 PM EST
 ************************************************************************/

#include<string.h>
#include<stdio.h>

int main()
{
	int a[10];
	char input[1000];
	int n, i, j;
	fgets(input, 1000, stdin);
	n = strlen(input);
	for (i = 0; i < 10; i++)
		a[i] = 0;
	for (i = 0; i < n; i++)
	{
		j = input[i] - 48;
		a[j]++;
	}
	for (i = 0; i < 10; i++) {
		if (a[i] == 0)
			continue;
		printf("%d:%d\n", i, a[i]);
	}
	return 0;
}

