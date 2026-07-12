//Write a programme to check whether a character is vowel or consonant
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);
	//Check vowel or consonant
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("%c Character is vowel",ch);
	}
	else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("%c Character is vowel",ch);
	}
	else if(ch>='A' && ch<='Z'||ch>='a' && ch<='z')
	{
		printf("%c Character is consonant",ch);
	}
	else
	{
		printf("%c Character is not Alphabet",ch);
	}
}
