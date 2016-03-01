/*************************************************************************
    > File Name: 76.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Fri 04 Dec 2015 09:27:34 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void multiply(int A[], int B[], int C[]);

int main()
{
	char A[100];
	char B[100];
	int ina[100], inb[100], result[200];
	int i, j, flag, n = 199;
	fgets(A, 100, stdin);
	fgets(B, 100, stdin);
	A[strlen(A)-1] = 0;
	B[strlen(B)-1] = 0;
	for (i = 0; i < 100; i++)
	{
		ina[i] = 0;
		inb[i] = 0;
	}
	for (i = 0; i < 200; i++)
		result[i] = 0;
	if ((A[0] != '-' && B[0] != '-') || (A[0] == '-' && B[0] == '-'))
	{
		flag = 0;
		if (A[0] == '-')
		{
			for (i = 1; i < strlen(A); i++)
				ina[i-1] = A[i] - '0';
			for (i = 1; i < strlen(B); i++)
				inb[i-1] = B[i] - '0';
		}
		else
		{
			for (i = 0; i < strlen(A); i++)
				ina[i] = A[i] - '0';
			for (i = 0; i < strlen(B); i++)
				inb[i] = B[i] - '0';
		}
	}
	else
	{
		flag = 1;
		if (A[0] == '-')
		{
			for (i = 1; i < strlen(A); i++)
				ina[i-1] = A[i] - '0';
			for (i = 0; i < strlen(B); i++)
				inb[i] = B[i] - '0';
		}
		else
		{
			for (i = 0; i < strlen(A); i++)
				ina[i] = A[i] - '0';
			for (i = 1; i < strlen(B); i++)
				inb[i-1] = B[i] - '0';
		}
	}
	multiply(ina, inb, result);
	while (result[n] == 0)
		n--;
	if (flag)
		printf("-");
	for (i = 0; i <= n; i++)
		printf("%d", result[i]);
	printf("\n");
	return 0;
}


void multiply(int A[], int B[], int C[])
{
	int i, j;
	for (i = 0; i < 100; i++)
		for (j = 0; j < 100; j++)
			C[i+j] += A[i] * B[j];
	for (i = 199; i > 0; i--)
	{
		C[i-1] += C[i]/10;
		C[i]=C[i]%10;
	}
}
