/*************************************************************************
    > File Name: sprintf.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Mon 30 Nov 2015 09:40:07 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	char A[10];
	int a;
	scanf("%d", &a);
	sprintf(A, "%04d", a);
	printf("%s\n", A);
	return 0;
}

