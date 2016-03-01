/*************************************************************************
    > File Name: 66.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 26 Nov 2015 02:42:32 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* search(char *cpsource, char ch);

int main()
{
	char input[100];
	char *result;
	char ch;
	memset(input, 0, 100);
	fgets(input, 100, stdin);
	scanf("%c", &ch);
	result = search(input, ch);
	printf("%s\n", result);
	return 0;
}

char* search(char *cpsource, char ch)
{
	char *result = (char*)malloc(100);
	int num = 0, i, j, k, maxnum = 0;
	memset(result, 0, 100);
	for (i = 0; i < strlen(cpsource); i++)
	{
		num = 0;
		if (cpsource[i] == ch)
		{
			for (j = i; j < strlen(cpsource) && cpsource[j] == ch; j++)
				++num;
		}
		if (num > maxnum)
		{
			maxnum = num;
			for (k = 0; k < num; k++)
				result[k] = ch;
		}
	}
	return result;
}
