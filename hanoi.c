/*************************************************************************
    > File Name: hanoi.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Mon 28 Dec 2015 04:16:04 PM EST
 ************************************************************************/

#include<stdio.h>

void hanoi(int i, char A, char B, char C);
void move(int i, char x, char y);

int main()
{
	int n;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}

void hanoi(int i, char A, char B, char C)
{
	if (i == 0)
		return;
	else if (i == 1)
		move(i, A, C);
	else
	{
		hanoi(i-1, A, C, B);
		move(i, A, C);
		hanoi(i-1, B, A, C);
	}
}

void move(int i, char x, char y)
{
	static int c = 1;
	printf("%d: %d from %c->%c\n", c++, i, x, y);
}
