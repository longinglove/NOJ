/*************************************************************************
  > File Name: 74.c
  > Author: duqinglong
  > Mail: du_303412@163.com 
  > Created Time: Mon 30 Nov 2015 09:53:13 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char in[1000], temp[10];
	char buff[100], ch;
	int num[100];
	int i, j, k = 0, sum = 0, m = 1;
	memset(in, 0, 1000);
	memset(buff, 0, 100);
	memset(temp, 0, 10);
	fgets(in, 1000, stdin);
	in[strlen(in)-1] = 0;
	for (i = 0; i < strlen(in); i++)
	{
		ch = in[i];
		sum = 1;
		for (j = i + 1; j < strlen(in); j++, i++)
		{
			if (ch == in[j])
				sum++;
			else
				break;
		}
		buff[k] = ch;
		num[k] = sum;
		k++;
	}
	sum = 0;
	for (i = 0; i < k; i++)
	{
		sum += num[i];
		if (sum >= 9)
		{
			printf("1");
			sum = num[i];
		}
		if (num[i] == 1)
		{
			temp[0] = buff[i];
			if (buff[i] == '1')
				printf("1");
			for (j = i+1; j < k; j++, i++)
			{
				if (num[j] != 1)
					break;
				else
				{
					temp[m] = buff[j];
					m++;
					sum++;
				}
			}
			printf("1%s", temp);
			memset(temp, 0, 10);
			m = 1;
		}
		else
			printf("%d%c", num[i], buff[i]);
	}
	printf("\n");
	return 0;
}

