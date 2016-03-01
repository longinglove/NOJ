/*************************************************************************
    > File Name: read.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 18 Nov 2015 10:01:34 PM EST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	int a[100], i;
	FILE * fp;
	memset(a, 0, 100);
	if ((fp = fopen("filetest", "r")) == NULL)
		printf("open file error");
	fread(a, sizeof(int), 100, fp);
	printf("%d\n", a[3]);
	fclose(fp);
	return 0;
}

