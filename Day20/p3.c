//Write a programme to write data in file - usinf fputc.
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("xyz.txt","w");
	if(fp==NULL)
	{
		printf("Error in file creation.\n");
	    exit(0);
	}
	int i,len;
	char str[100];
	printf("Enter any String!!\n");
	gets(str);
	//String write
	len=strlen(str);
	//printf("%d\n",len);
	for(i=0;i<len;i++)
	{
	   fputc(str[i],fp);
	   //printf("%c\n",str[i]);
    }
    for(i=0;i<str[i]!='\0';i++)
    {
        fputc(str[i],fp);	
	}
	printf("Data write successfully on file!!");
	fclose(fp);
}
