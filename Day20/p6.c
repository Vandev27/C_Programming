//Write a programme to read data in file - using fgets.
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
	char str[100];
	//Single Character
    fgets(str,100,fp);
	puts(str);
	fclose(fp);
}
