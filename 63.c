/*************************************************************************
    > File Name: 63.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 26 Nov 2015 10:59:37 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void strencode(char *s);

int main()
{
	char *s = (char*)malloc(1000);
	fgets(s, 1000, stdin);
	s[strlen(s)-1] = 0;
	strencode(s);
	printf("%s\n", s);
	return 0;
}

void strencode(char *s)
{
	int i;
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 3;
		else if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 3;
		else
			continue;
	}
}

