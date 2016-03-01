/*************************************************************************
    > File Name: 75.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Mon 30 Nov 2015 04:48:45 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char A[120], B[120], result[120], ch;
	int i, j, k, tempA, tempB, flag = 0;
	memset(A, 0, 120);
	memset(B, 0, 120);
	memset(result, 0, 120);
	fgets(A, 120, stdin);
	A[strlen(A)-1] = 0;
	fgets(B, 120, stdin);
	B[strlen(B)-1] = 0;
	if (A[0] != '-' && B[0] != '-')
	{
		for (i = strlen(A) - 1, j = strlen(B) - 1, k = 0; i >= 0 && j >= 0; i--, j--, k++)
		{
			tempA = A[i] - 48;
			tempB = B[j] - 48;
			if (tempA + tempB + flag >= 10)
			{
				result[k] = tempA+tempB+flag-10+48;
				flag = 1;
			}
			else
				result[k] = tempA+tempB+flag+48;
		}
		if (strlen(A) > strlen(B))
		{
			for (; i >= 0; i--, k++)
				result[k] = A[i];
		}
		else if (strlen(A) < strlen(B))
		{
			for (; j >= 0; j--, k++)
				result[k] = B[j];
		}
		else
		{
			if (tempA + tempB + flag >= 10)
				result[k] = '1';
			flag = 0;
		}
		for (i = strlen(result); i >= 0; i--)
			printf("%c", result[i]);
		printf("\n");
	}
	else if (A[0] == '-' && B[0] == '-')
	{
		for (i = strlen(A) - 1, j = strlen(B) - 1, k = 0; i > 0 && j > 0; i--, j--, k++)
		{
			tempA = A[i] - 48;
			tempB = B[j] - 48;
			if (tempA + tempB + flag >= 10)
			{
				result[k] = tempA+tempB+flag-10+48;
				flag = 1;
			}
			else
				result[k] = tempA+tempB+flag+48;
		}
		if (strlen(A) > strlen(B))
		{
			for (; i >= 0; i--, k++)
				result[k] = A[i];
		}
		else if (strlen(A) < strlen(B))
		{
			for (; j >= 0; j--, k++)
				result[k] = B[j];
		}
		else
		{
			if (tempA+tempB+flag >= 10)
			{
				result[k] = '1';
				result[++k] = '-';
				flag = 0;
			}
			else
			{
				result[k] = '-';
			}
		}
		for (i = strlen(result); i >= 0; i--)
			printf("%c", result[i]);
		printf("\n");
	}
	else if (A[0] != '-' && B[0] == '-')
	{
		if (strlen(A) >= strlen(B))
		{
			for (i = strlen(A)-1, j = strlen(B)-1, k = 0; j > 0; i--, j--, k++)
			{
				tempA = A[i] - 48;
				tempB = B[j] - 48;
				if (tempA-tempB-flag < 0)
				{
					result[k] = 10+tempA-tempB-flag+48;
					flag = 1;
				}
				else
				{
					result[k] = tempA-tempB+48;
					flag = 0;
				}
			}
			for (i = strlen(A)-strlen(B); i >= 0; i--, k++)
			{
				result[k] = A[i]-flag;
				flag = 0;
			}
			for (i = strlen(A)-1; i >= 0; i--)
				printf("%c", result[i]);
			printf("\n");
		}
		else
		{
			for (i = strlen(B)-1, j = strlen(A)-1, k = 0; j >=0 && i >= 1; i--, j--, k++)
			{
				tempA = A[j] - 48;
				tempB = B[i] - 48;
				if (tempB-tempA-flag < 0)
				{
					result[k] = 10+tempB-tempA-flag+48;
					flag = 1;
				}
				else
				{
					result[k] = tempB-tempA+48;
					flag = 0;
				}
			}
			for (i = strlen(B) - strlen(A) - 1; i >= 1; i--, k++)
			{
				result[k] = B[i]-flag;
				flag = 0;
			}
			if (strlen(A) < strlen(B)-1)
				result[k] = '-';
			else
			{
				for (i = 0, j = 1; i)
			}
			for (i = strlen(result); i >= 0; i--)
				printf("%c", result[i]);
			printf("\n");
		}
	}
	return 0;
}

