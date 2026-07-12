//Upper case to lower case
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter any charachter in upper case");
	scanf("%c",&ch);
	ch=ch+32;
	printf("Lower case character = %c\n",ch);
}
