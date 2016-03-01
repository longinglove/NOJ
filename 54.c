/*************************************************************************
    > File Name: 54.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Mon 23 Nov 2015 05:13:27 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[1000], b[100];
	int i, r[100], j = 0, k;
	memset(a, 0, 1000);
	fgets(a, 1000, stdin);
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] >= '0' && a[i] <= '9') {
			k = 0;
			while (a[i] >= '0' && a[i] <= '9')
			{
				b[k] = a[i];
				i++;
				k++;
			}
			r[j] = atoi(b);
			j++;
			memset(b, 0, 100);
		}
		else
			continue;
	}
	printf("%d\n", j);
	printf("%d", r[0]);
	for (i = 1;i < j; i++)
		printf(" %d", r[i]);
	printf("\n");
	return 0;
}

