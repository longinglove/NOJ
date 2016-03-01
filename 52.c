/*************************************************************************
    > File Name: 52.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Sat 21 Nov 2015 11:29:20 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

#define MAXNUM 1000

int main()
{
	char S1[MAXNUM], len, i;
	memset(S1, 0, MAXNUM);
	fgets(S1, 1000, stdin);
	len = strlen(S1);
	for (i = len - 1; i >= 0; i--)
	{
		if (S1[i] == '=')
			continue;
		else
			printf("%c", S1[i]);
	}
	printf("\n");
	return 0;
}


