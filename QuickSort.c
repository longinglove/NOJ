/*************************************************************************
    > File Name: QuickSort.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Fri 04 Mar 2016 04:30:26 PM CST
 ************************************************************************/

#include<stdio.h>

void quickSort(int* array, int start, int end);

int main()
{
	int a[10], i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	quickSort(a, 0, 9);
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}

void quickSort(int* array, int start, int end)
{
	int i, j, temp, flag;
	flag = array[start], i = start, j = end;
	if (start > end)
		return;
	while (i < j)
	{
		while (array[j] >= flag && i < j) j--;
		while (array[i] <= flag && i < j) i++;
		if (i < j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	array[start] = array[i];
	array[i] = flag;
	quickSort(array, start, i-1);
	quickSort(array, i+1, end);
}

