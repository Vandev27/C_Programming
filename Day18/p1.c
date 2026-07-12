//Write a programme to sorting of string by selection sorting.
#include<stdio.h>
void main()
{
	char str[30];
	int len=0,i,temp,j;
	printf("Enter the string\n");
	gets(str);
	puts(str);
	//For string length
	while(str[len]!= '\0')
	{
		len++;
	}
	printf("Length of string = %d\n",len);
	//Sorting logicn
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	puts(str);
}
