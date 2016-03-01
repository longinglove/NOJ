
/*************************************************************************
    > File Name: 2388.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 16 Jun 2015 10:49:13 AM EDT
 ************************************************************************/

#include <stdio.h>

#define MAXCOWS		100000
int num[MAXCOWS];
int n;
void quicksort(int left, int right);

int 
main()
{
	int cows, total;
	scanf("%d", &cows);
	for (total = 0; total < cows; total++)
		scanf("%d", &num[total]); 

	n = total;
	quicksort(0, n);

	printf("%d\n", num[(n+1)/2]);
	return 0;
}

void quicksort(int left, int right)
{
	int i, j, t, temp;
	temp = num[left];
	if (left > right)
		return;
	i = left;
	j = right;
	while (i != j)
	{
		while (num[j] >= temp && i < j)
			j--;
		while (num[i] <= temp && i < j)
			i++;
		if (i < j)
		{
			t = num[i];
			num[i] = num[j];
			num[j] = t;
		}
	}
	num[left] = num[i];
	num[i] = temp;

	quicksort(left, i - 1);
	quicksort(i + 1, right);
	return;
}
