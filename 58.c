/*************************************************************************
    > File Name: 58.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 24 Nov 2015 02:31:48 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char input[1000];
	int unum, dnum, snum, i;
	double result;
	fgets(input, 1000, stdin);
	unum = dnum = snum = 0;
	for (i = 0; i < strlen(input); i++)
	{
		if (input[i] == 'U')
			unum++;
		else if (input[i] == 'D')
			dnum++;
		else if (input[i] == 'S')
			snum++;
	}
	result = (unum*1.0)/(strlen(input)-1);
	if (snum != 0)
		printf("WA\n");
	else {
		if (fabs(result - 0.5) >= 0.003)
			printf("Fail\n");
		else
			printf("%f\n", result);
	}
	return 0;
}

