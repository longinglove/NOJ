/*************************************************************************
    > File Name: 56.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 24 Nov 2015 11:50:31 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100], b[100];
	int m, j = 0, i;
	fgets(a, 100, stdin);
	memset(b, 0, 100);
	scanf("%d", &m);
	a[strlen(a) - 1] = '\0';
	for (i = m; i < strlen(a); i++, j++)
		b[j] = a[i];
	printf("%s\n", b);
	return 0;
}

