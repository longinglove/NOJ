/*************************************************************************
    > File Name: 31.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Mon 16 Nov 2015 10:22:18 PM EST
 ************************************************************************/

#include<stdio.h>

void func(int);

int main()
{
	int n;
	scanf("%d", &n);
	func(n);
	printf("\n");
	return 0;
}

void func(int n)
{
	int value;
	if (n == 0)
		return;
	printf("%d", n%10);
	func(n/10);
}

