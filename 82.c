/*************************************************************************
    > File Name: 82.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Fri 27 Nov 2015 11:53:58 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int A[10];
	int i, temp;
	for (i = 0; i < 5; i++)
		scanf("%d", &A[i]);
	if (((A[1] - A[0]) == (A[2] - A[1])) && ((A[1] - A[0]) == (A[3] - A[2])))
	{
		temp = A[1] - A[0];
		for (i = 5; i < 10; i++)
			A[i] = i*temp + A[0];
	}
	if ((A[1]%A[0] == 0) && (A[2]%A[1] == 0) && (A[3]%A[2] == 0) && (A[1]/A[0] == A[2]/A[1]) && (A[1]/A[0] == A[3]/A[2]))
	{
		temp = A[1]/A[0];
		for (i = 5; i < 10; i++)
			A[i] = A[i-1]*temp;
	}
	if ((A[1]+A[0] == A[2]) && (A[1]+A[2] == A[3]) && (A[2]+A[3] == A[4]))
	{
		for (i = 5; i < 10; i++)
			A[i] = A[i-2] + A[i-1];
	}
	for (i = 5; i < 10; i++)
		printf("%d ", A[i]);
	printf("\n");
	return 0;
}

