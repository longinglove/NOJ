/*************************************************************************
    > File Name: consecutive.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 25 Nov 2015 09:46:49 AM EST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int A[10000], i, j, temp, n = 0, index = 2, sum, value;
	for (i = 0; i < 10000; i++)
		A[i] = 0;
	A[0] = 2;
	A[1] = 3;
	for (i = 2; i < 10000; i++)
	{
		for (j = 2; j <= (int)sqrt(i); j++)
		{
			if (i % j == 0)
				break;
			if (j == (int)sqrt(i))
			{
				A[index] = i;
				index++;
			}
		}
	}
	while (scanf("%d", &value) == 1) 
	{
		if (value != 0)
		{
			temp = 0;
			for (i = 0; i < index; i++)
			{
				sum = 0;
				for (j = i; j < index; j++)
				{
					sum += A[j];
					if (sum == value) {
						temp++;
						break;
					}
					else if (sum > value)
						break;
					else
						continue;
				}
			}
			printf("%d\n", temp);
		}
		else
			break;
		n++;

	}
	return 0;
}
