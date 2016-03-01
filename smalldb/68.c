/*************************************************************************
    > File Name: 68.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Fri 27 Nov 2015 10:23:16 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student {
	int id;
	char name[12];
	int score;
} STUDENT;

int main()
{
	FILE * fp1, *fp2;
	STUDENT std, max;
	int num, i;
	max.score = 0;
	scanf("%d", &num);
	if ((fp1 = fopen("DATA5614.DB", "w")) != NULL)
	{
		for (i = 0; i < num; i++)
		{
			scanf("%d %s %d", &std.id, std.name, &std.score);
			fwrite(&std, sizeof(STUDENT), 1, fp1); 
		}
		fclose(fp1);
	}
	if ((fp2 = fopen("DATA5614.DB", "r")) != NULL)
	{
		for (i = 0; i < num; i++)
		{	
			fread(&std, sizeof(STUDENT), 1, fp2);
			if (std.score > max.score)
			{
				max.id = std.id;
				max.score = std.score;
				strncpy(max.name, std.name, sizeof(std.name));
			}
		}
		fclose(fp2);
	}
	printf("%d %s %d\n", max.id, max.name, max.score);
	return 0;
}

