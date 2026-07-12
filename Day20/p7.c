//Write a programme to read data in file - using fscanf.
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
    fscanf(fp,"%[^\n]s",str);//[^\n] used for reading whole line until you did not get enter
	printf("%s\n",str);
	printf("Data Read Successfully!!");
	fclose(fp);
}
