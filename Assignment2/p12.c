//Write a programme to check whether a given character is an alphabet, digit or special character.
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);
	//Check a given character
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	   printf("%c character is Alphabet",ch);
	else if(ch>='0' && ch<='9')
	   printf("%c character is Number",ch);
	else
	   printf("%c character is Special symbol",ch);
}
