/*************************************************************************
    > File Name: 53.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Mon 23 Nov 2015 05:04:27 PM EST
 ************************************************************************/

#include<string.h>
#include<stdio.h>

int stringcompare(char S1[], char S2[]);

int main()
{
	char S1[100], S2[100];
	gets(S1);
	gets(S2);
	printf("%d\n", stringcompare(S1, S2));
	return 0;
}

int stringcompare(char S1[], char S2[])
{
	int i;
	for (i = 0; ; i++)
	{
		if (S1[i] != S2[i])
			return S1[i]-S2[i];
		else if (i == strlen(S1) && i == strlen(S2))
			return 0;
		else
			continue;

	}
}

