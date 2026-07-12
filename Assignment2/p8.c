//Write a programme to check whether a character is uppercase or lowercase
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);
	//Check upper case or lower case
	if(ch>='a' && ch<='z')
	    printf("%c character is in lower case",ch);
	else if(ch>='A' && ch<='Z')
	    printf("%c character is in upper case",ch);
	else
	    printf("%c character is not valid",ch);
}
