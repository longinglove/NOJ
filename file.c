/*************************************************************************
    > File Name: file.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 18 Nov 2015 09:39:17 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	FILE * fin;
	int a[100], n, i;
	memset(a, 0, sizeof(a));
	fin = fopen("filetest", "wb");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	fwrite(a, sizeof(int), 100, fin);
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	//fread();
	fclose(fin);
	return 0;
}

