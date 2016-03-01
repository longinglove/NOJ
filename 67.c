/*************************************************************************
    > File Name: 67.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 26 Nov 2015 02:58:02 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int Sim(int, int);

int main()
{
	char in[20];
	int a, b, c, d, e, f, temp;
	memset(in, 0, 20);
	fgets(in, 20, stdin);
	a = in[0] - 48;
	b = in[2] - 48;
	c = in[4] - 48;
	d = in[6] - 48;
	if (in[3] == '+')
	{
		e = a*d + c*b;
		f = d*b;
		temp = Sim(e,f);
		e = e/temp;
		f = f/temp;
	}
	else if (in[3] == '-')
	{
		e = a*d - c*b;
		f = d*b;
		temp = Sim(e,f);
		e = e/temp;
		f = f/temp;
	}
	if (e == 0)
		printf("0");
	else
		printf("%d/%d", e, f);
}

int Sim(int fz, int fm)
{
	int i;
	for (i = fz; i >= 2; i--) 
	{
		if (fz%i == 0 && fm%i == 0)
			return i;
		else
			continue;
	}
	return 1;
}
