//Write a programme to append data in file - using fputs.
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("pqr.txt","a");
	if(fp==NULL)
	{
		printf("Error in file creation.\n");
	    exit(0);
	}
	char str[100];
	printf("Enter any String!!\n");
	gets(str);
	//Update write
	fputs(str,fp);
	printf("Data write successfully on file!!");
	fclose(fp);
}
