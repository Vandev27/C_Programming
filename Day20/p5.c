//Write a programme to read data in file - using fgetc.
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("File not exist.\n");
	    exit(0);
	}
	char ch;
	//Single Character
    ch=fgetc(fp);
	printf("Char = %c\n",ch);
	printf("Data write successfully on file!!");
	fclose(fp);
}
