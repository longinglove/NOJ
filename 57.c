/*************************************************************************
    > File Name: 57.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Tue 24 Nov 2015 11:58:58 AM EST
 ************************************************************************/

#include<string.h>
#include<stdio.h>

int Big = 0, Low = 0, Space = 0, Number = 0, Other = 0;

void Caculate(char line[]);

int main()
{
	char line1[100], line2[100], line3[100];
	fgets(line1, 100, stdin);
	fgets(line2, 100, stdin);
	fgets(line3, 100, stdin);
	Caculate(line1);
	Caculate(line2);
	Caculate(line3);
	printf("%d %d %d %d %d\n", Big, Low, Number, Space, Other);
	return 0;
}

void Caculate(char line[])
{
	int i;
	line[strlen(line) - 1] = '\0';
	for (i = 0; i < strlen(line); i++)
	{
		if (line[i] >= 'A' && line[i] <= 'Z')
			Big++;
		else if (line[i] >= 'a' && line[i] <= 'z')
			Low++;
		else if (line[i] >= '0' && line[i] <= '9')
			Number++;
		else if (line[i] == ' ')
			Space++;
		else
			Other++;
	}
}
