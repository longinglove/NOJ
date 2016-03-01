/*************************************************************************
    > File Name: 98.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 01 Dec 2015 02:59:51 PM EST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int IsPrime(int);

int main()
{
	int a, b, i, j, num, n, temp1, temp2;
	while (scanf("%d %d", &a, &b) == 2)
	{
		if (a == 0 && b == 0)
			break;
		else
		{
			num = 0;
			for (i = a; i <= b; i++)
			{
				temp1 = 0;
				temp2 = 0;
				n = i;
				if (n == 1)
					continue;
				else
				{
					while (!IsPrime(n))
					{
						n--;
						temp1++;
					}
					temp1++;
					for (j = i; j >= 2 && i % j == 0; j--)
					{
						if (IsPrime(j))
						{
							n = i % j;
							temp2++;
						}
					}
					temp2++;
				}
				num += temp1 >= temp2 ? temp2 : temp1;
			}
			printf("%d\n", num);
		}
	}
}

int IsPrime(int n)
{
	int i;
	if (n == 2 || n == 3)
		return 1;
	else
	{
		for (i = 2; i <= (int)sqrt(n); i++)
		{
			if (n % i == 0)
				return 0;
			if (i == (int)sqrt(n))
				return 1;
		}
	}
}
