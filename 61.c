/*************************************************************************
    > File Name: 61.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 26 Nov 2015 09:19:52 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void fun(char *s, char *t);

int main()
{
	char s[100], t[50];
	char *input, *output;
	memset(s, 0, 100);
	memset(t, 0, 50);
	input = s;
	output = t;
	fgets(input, 100, stdin);
	input[strlen(input)-1] = 0;
	fun(input, output);
	printf("%s\n", output);
	return 0;
}

void fun(char *s, char *t)
{
	int i, j;
	for (i = 0, j = 0; i < strlen(s); i++)
	{
		if (i % 2 != 0 || s[i] % 2 != 0)
		{
			t[j] = s[i];
			j++;
		}
		else
			continue;
	}
}

