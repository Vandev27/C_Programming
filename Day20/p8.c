//Write a programme to read data in file - usinf fgetc.
#include<stdio.h>//Error in programme can't run
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("File does not exist.\n");
	    exit(0);
	}
	int i=0;
	char ch;
	char str[100];
//	printf("Enter any String!!\n");
//	gets(str);
//	//String write
//	len=strlen(str);
	//printf("%d\n",len);
//	for(i=0;i<len;i++)
//	{
//	   fgetc(str[i],fp);
//	   //printf("%c\n",str[i]);
//    }
//    for(i=0;i<str[i]!='\0';i++)
//    {
//       str=fgetc(fp);	
//       printf("%c",str);
//	}
    while((ch = fgetc(fp))!=EOF && ch!='\n')
    {
        str[i]=ch;
        i++;
	}
	str[i]='\0';
	printf("%s",str);
	printf("Data read successfully on file!!");
	fclose(fp);
}
