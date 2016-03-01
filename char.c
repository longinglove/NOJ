/*************************************************************************
    > File Name: char.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Mon 23 Nov 2015 04:31:32 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void upsort(char *input, int s, int m);
void downsort(char *input, int s, int m);

int main()
{
	char input[1000];
	int n, i;
	fgets(input, 1000, stdin);
	n = strlen(input)-1;
	input[n] = 0;
	upsort(input, n/2, n - 1);
	downsort(input, 0, n/2 - 1);
	for (i = n/2; i < n; i++)
		printf("%c", input[i]);
	for (i = 0; i <= n/2 -1; i++)
		printf("%c", input[i]);
	printf("\n");
	return 0;
}

void upsort(char *input, int s, int m)
{
	char temp;
	int i, j;
	for (i = 0; i <= m - s; i++)
	{
		for (j = s; j < m; j++)
		{
			if (input[j] > input[j+1])
			{
				temp = input[j];
				input[j] = input[j+1];
				input[j+1] = temp;
			}
		}
	}
}

void downsort(char *input, int s, int m)
{
	char temp;
	int i, j;
	for (i = s; i <= m; i++)
	{
		for (j = s; j <= m - i; j++)
		{
			if (input[j] < input[j + 1])
			{
				temp = input[j];
				input[j] = input[j+1];
				input[j+1] = temp;
			}
		}
	}
}

