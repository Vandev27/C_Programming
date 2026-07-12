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
	
	char ch;
	printf("Enter any character\n");
	scanf("%c",&ch);
	//Write a character
	fputc(ch,fp);
	printf("Character write successfully!!");
	fclose(fp);
	
}
