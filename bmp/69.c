/*************************************************************************
    > File Name: 69.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Fri 27 Nov 2015 10:16:05 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
	long width, height;
	FILE * fp;
	if ((fp = fopen ("DATA5611.BMP", "r")) != NULL)
	{
		fseek(fp, 18L, 0);
		fread(&width, sizeof(long), 1, fp);
		fread(&height, sizeof(long), 1, fp);
		printf("%ld %ld\n", width, height);
		fclose(fp);
	}
	return 0;
}

