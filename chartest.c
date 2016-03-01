/*************************************************************************
    > File Name: chartest.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 26 Nov 2015 09:30:23 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *p = (char*)malloc(100);
	fgets(p, 100, stdin);
	printf("%s\n", p);
	return 0;
}

