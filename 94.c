/*************************************************************************
    > File Name: 94.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Fri 27 Nov 2015 10:22:04 PM EST
 ************************************************************************/

#include<stdio.h>

#define pi 3.1415926

int main()
{
	double coorx, coory, square;
	int n, i = 0, result;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%lf %lf", &coorx, &coory);
		square = pi*(coorx*coorx+coory*coory)/2;
		result = (int)square/50+1;
		printf("%d %d\n", ++i, result);
	}
	return 0;
}

