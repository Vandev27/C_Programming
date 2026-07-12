//Write a programme to write data in file - using fprintf.
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("pqr.txt","w");
	if(fp==NULL)
	{
		printf("Error in file creation.\n");
	    exit(0);
	}
	char str[100];
	printf("Enter any String!!\n");
	gets(str);
	//String write
	fprintf(fp,"%s",str);
	printf("Data write successfully on file!!");
	fclose(fp);
}
