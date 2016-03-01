/*************************************************************************
    > File Name: stringmerge.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Sat 21 Nov 2015 11:07:49 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

#define MAXLEN 10000
void stringmerge(char S1[], char S2[]);

int main()
{
	char S1[MAXLEN], S2[MAXLEN];
	memset(S1, 0, MAXLEN);
	memset(S2, 0, MAXLEN);
	fgets(S1, MAXLEN, stdin);
	fgets(S2, MAXLEN, stdin);
	stringmerge(S1, S2);
	return 0;
}

void stringmerge(char S1[], char S2[])
{
	int len, i;
	len = strlen(S1) - 1;
	for (i = 0; S2[i] != '\0'; i++)
		S1[len+i] = S2[i];
	S1[len+i+1] = '\0';
	printf("%s\n", S1);
}

