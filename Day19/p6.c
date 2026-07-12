//File Handling : Creation of file
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
		printf("Error in file creation!!");
		exit(0);
	}
	else
	{
		printf("File Created Successfully!!");
		fclose(fp);
	}
}
