/*************************************************************************
    > File Name: 65.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 26 Nov 2015 02:33:48 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	FILE * fp;
	char ch[100];
	int ifnum = 0, whilenum = 0, fornum = 0, i;
	memset(ch, 0, 100);
	fp = fopen("DATA5610.TXT", "r");
	while (fgets(ch, 100, fp) != NULL)
	{
		for (i = 0; i < strlen(ch); i++)
		{
			if (ch[i] == 'i' && ch[i+1] == 'f')
				ifnum++;
			else if (ch[i] == 'w' && ch[i+1] == 'h' && ch[i+2] == 'i' && ch[i+3] == 'l' && ch[i+4] == 'e')
				whilenum++;
			else if (ch[i] == 'f' && ch[i+1] == 'o' && ch[i+2] == 'r')
				fornum++;
			else
				continue;
		}
	}
	printf("%d %d %d\n", ifnum, whilenum, fornum);
	fclose(fp);
	return 0;
}
