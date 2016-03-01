/*************************************************************************
    > File Name: 64.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 26 Nov 2015 11:15:24 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE * fp1;
	FILE * fp2;
	char ch[100];
	char s[100];
	int i = 0;
	memset(ch, 0, 100);
	memset(s, 0, 100);
	fp1 = fopen("DATA5612.CPP", "r");
	fp2 = fopen("DATA5612.TXT", "w");
	while (fgets(ch, 100, fp1) != NULL)
	{
		sprintf(s, "%04d %s", ++i, ch);
		fwrite(s, strlen(s), 1, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}

