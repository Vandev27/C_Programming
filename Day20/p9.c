//Write a programme to copy the data from one file to another file.
#include<stdio.h>
#include<stdlib.h>
void main()
{
   FILE *fp,*fq;
   fp=fopen("abc.txt","r");
   if(fp==NULL)
   {
   	printf("File does not exist");
   	exit(0);
   }
   fq=fopen("pre.txt","w");
   if(fq==NULL)
   {
   	printf("File can't create");
   	exit(0);
   }
   char str[100];
	//String
    fscanf(fp,"%[^\n]s",str);
    puts(str);
   	fputs(str,fq);
   	printf("Data copied Successfully!!");
   	fclose(fp);
   	fclose(fq);
}
