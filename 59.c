/*************************************************************************
    > File Name: 59.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 24 Nov 2015 02:43:28 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void deletechar(char S[], char c);

int main()
{
	char S[100], c;
	fgets(S, 100, stdin);
	scanf("%c", &c);
	S[strlen(S) - 1] = '\0';
	deletechar(S, c);
	printf("%s\n", S);
	return 0;
}

void deletechar(char S[], char c)
{
	int i, j;
	for (i = 0; i < strlen(S); i++)
	{
		if (S[i] == c)
		{
			for (j = i; j < strlen(S); j++)
				S[j] = S[j+1];
		}
		else
			continue;
	}
}
