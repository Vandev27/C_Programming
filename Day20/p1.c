//Write a programme to write data in file - using fputs.
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
		printf("Error in file creation.\n");
	    exit(0);
	}
	char str[100];
	printf("Enter any String!!\n");
	gets(str);
	//String write
	fputs(str,fp);
	printf("Data write successfully on file!!");
	fclose(fp);
}
