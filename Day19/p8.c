//File Handling : Updation of file
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
	
	char ch[20];
	printf("Enter any string\n");
	gets(ch);
	//Write a character
	fputs(ch,fp);
	printf("Data write successfully!!");
	fclose(fp);
	
}
