/*************************************************************************
    > File Name: 70.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Fri 27 Nov 2015 09:51:12 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char formj[10], formg[10], formp[10];
	FILE * fp;
	memset(formj, 0, 10);
	memset(formg, 0, 10);
	memset(formp, 0, 10);
	fp = fopen("DATA5609.DAT", "r");
	fseek(fp, 6L, 0);
	fgets(formj, 10, fp); 
	fseek(fp, 0L, 0);
	fgets(formg, 10, fp);
	fseek(fp, 1L, 0);
	fgets(formp, 10, fp);
	if (formj[0] == 'J' && formj[1] == 'F' && formj[2] == 'I' && formj[3] == 'F')
		printf("JPEG\n");
	if (formg[0] == 'G' && formg[1] == 'I' && formg[2] == 'F' && formg[3] == '8' && formg[4] == '9' && formg[5] == 'a')
		printf("GIF\n");
	if (formp[0] == 'P' && formp[1] == 'N' && formp[2] == 'G')
		printf("PNG\n");
	return 0;
}
