/*************************************************************************
    > File Name: div.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 26 Nov 2015 03:10:34 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char num[10000];
	char res[10000];
	int i = 0, a, val = 0, result = 0, temp, mid = 0;
	memset(num, 0, 10000);
	scanf("%s", num);
	scanf("%d", &a);
	temp = num[0] - 48;
	for (i = 0; i <= strlen(num) - 1; i++)
	{
		temp += mid;
		val = temp%a;
		result = temp/a;
		temp = val*10;
		mid = num[i+1] - 48;
		res[i] = result + 48;
	}
	if (res[0] == '0')
	{
		for (i = 1; i < strlen(res); i++)
			printf("%c", res[i]);
		printf(" %d\n", val);
	}
	else
		printf("%s %d\n", res, val);

	return 0;
}

