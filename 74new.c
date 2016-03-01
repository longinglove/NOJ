/*************************************************************************
    > File Name: 74new.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 03 Dec 2015 11:29:55 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[100];
	int i, n, h, j;
	gets(a);
	for (i = 0; i < strlen(a); i++)
	{
		h = 0;
		for (j = i; j < strlen(a) && h < 9; j++)
		{
			if (a[j] == a[i])
				h++;
			else
				break;
		}
		printf("%d%c", h, a[i]);
		i = i+h-1;
	}
	return 0;
}

