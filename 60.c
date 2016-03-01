/*************************************************************************
    > File Name: 60.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Mon 23 Nov 2015 03:48:58 PM EST
 ************************************************************************/

#include<string.h>
#include<stdio.h>

int main()
{
	char input[10000];
	char ch[100][100];
	int i, j = 0, k = 0, n;
	memset(ch, 0, 10000);
	fgets(input, 10000, stdin);
	n = strlen(input);
	input[n - 1] = '\0';
	for (i = 0; i < n; i++)
	{
		if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
			ch[j][k] = input[i];
			k++;
		}
		else {
			j++;
			k = 0;
		}
	}
	for ( ; j > 0; j--)
	{
		if (ch[j][0] == '\0')
			continue;
		printf("%s ", ch[j]);
	}
	printf("%s\n", ch[0]);
	return 0;
}

