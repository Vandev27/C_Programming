//Write a programme to check whether a character is a lowercase vowel.
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter any character.\n");
	scanf("%c",&ch);
	//Logic
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("The character is lower case vowel.");
	}
	else
	{
		printf("The chracter is not lower case value");
	}
}
