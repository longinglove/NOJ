/*************************************************************************
    > File Name: 55.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 24 Nov 2015 11:16:29 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void Left(char src[], int n, char dest[]);
void Right(char src[], int n, char dest[]);
void Mid(char src[],int loc, int n, char dest[]);

int main()
{
	char a[1000], left[100], right[100], mid[100];
	int n, loc;
	fgets(a, 1000, stdin);
	a[strlen(a)-1] = '0';
	memset(left, 0, 100);
	memset(right, 0, 100);
	memset(mid, 0, 100);
	scanf("%d %d", &n, &loc);
	Left(a, n, left);
	Right(a, n, right);
	Mid(a, loc, n, mid);
	return 0;
}

void Left(char src[], int n, char dest[])
{
	int i;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	printf("%s\n", dest);
}
void Right(char src[], int n, char dest[])
{
	int i, j = 0;
	for (i = strlen(src) - n - 1; i < strlen(src) - 1; i++, j++)
		dest[j] = src[i];
	printf("%s\n", dest);
}
void Mid(char src[],int loc, int n, char dest[])
{
	int i, j = 0;
	for (i = loc; i < loc+n; i++, j++)
		dest[j] = src[i];
	printf("%s\n", dest);
}

