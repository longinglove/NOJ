/*************************************************************************
    > File Name: 62.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 26 Nov 2015 09:39:33 AM EST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

typedef struct complex {
	double r;
	double i;
} COMPLEX;

void complexplus(COMPLEX com1, COMPLEX com2);
void complexsub(COMPLEX com1, COMPLEX com2);
void complexmul(COMPLEX com1, COMPLEX com2);
void complexdiv(COMPLEX com1, COMPLEX com2);

int main()
{
	COMPLEX com1, com2;
	scanf("%lf %lf", &com1.r, &com1.i);
	scanf("%lf %lf", &com2.r, &com2.i);
	complexplus(com1, com2);
	complexsub(com1, com2);
	complexmul(com1, com2);
	complexdiv(com1, com2);
	return 0;
}

void complexplus(COMPLEX com1, COMPLEX com2)
{
	char ch1, ch2, ch3;
	if (com1.i>0)
		ch1 = '+';
	else
		ch1 = '-';
	if (com2.i > 0)
		ch2 = '+';
	else
		ch2 = '-';
	if ((com1.i+com2.i) > 0)
		ch3 = '+';
	else
		ch3 = '-';
	printf("(%.2f%c%.2fi)+(%.2f%c%.2fi)=(%.2f%c%.2fi)\n", com1.r, ch1, fabs(com1.i), com2.r, ch2, fabs(com2.i), com1.r+com2.r, ch3, fabs(com1.i+com2.i));
}

void complexsub(COMPLEX com1, COMPLEX com2)
{
	char ch1, ch2, ch3;
	if (com1.i>0)
		ch1 = '+';
	else
		ch1 = '-';
	if (com2.i > 0)
		ch2 = '+';
	else
		ch2 = '-';
	if ((com1.i-com2.i) > 0)
		ch3 = '+';
	else
		ch3 = '-';

	printf("(%.2f%c%.2fi)-(%.2f%c%.2fi)=(%.2f%c%.2fi)\n", com1.r, ch1, fabs(com1.i), com2.r, ch2, fabs(com2.i), com1.r-com2.r, ch3, fabs(com1.i-com2.i));
}

void complexmul(COMPLEX com1, COMPLEX com2)
{
	COMPLEX result;
	char ch1, ch2, ch3;
	if (com1.i>0)
		ch1 = '+';
	else
		ch1 = '-';
	if (com2.i > 0)
		ch2 = '+';
	else
		ch2 = '-';

	result.r = com1.r*com2.r-com1.i*com2.i;
	result.i = com1.r*com2.i+com1.i*com2.r;
	if (result.i > 0)
		ch3 = '+';
	else
		ch3 = '-';
	printf("(%.2f%c%.2fi)*(%.2f%c%.2fi)=(%.2f%c%.2fi)\n", com1.r, ch1, fabs(com1.i), com2.r, ch2, fabs(com2.i), result.r, ch3, fabs(result.i));
}

void complexdiv(COMPLEX com1, COMPLEX com2)
{
	COMPLEX result;
	double deno;
	char ch1, ch2, ch3;
	if (com1.i>0)
		ch1 = '+';
	else
		ch1 = '-';
	if (com2.i > 0)
		ch2 = '+';
	else
		ch2 = '-';

	deno = (com2.i*com2.i-(-1.0)*com2.r*com2.r);
	result.r = (com1.r*com2.r-(-1.0)*com1.i*com2.i)/deno;
	result.i = (com1.r*(-1.0)*com2.i+com1.i*com2.r)/deno;
	if (result.i > 0)
		ch3 = '+';
	else
		ch3 = '-';
	printf("(%.2f%c%.2fi)/(%.2f%c%.2fi)=(%.2f%c%.2fi)\n", com1.r, ch1, fabs(com1.i), com2.r, ch2, fabs(com2.i), result.r, ch3, fabs(result.i));
}
