//Write a programme to check whether a character is vowel,consonant,digit or special character.
#include<stdio.h>
void main()
{ 
    int type;
	char ch;
	printf("Enter character\n");
	scanf("%c",&ch);
	//If statement
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	   type = 1;
	else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	   type = 2;
	else if(ch>='0' && ch<='9')
	   type = 3;
	else
	   type =4;
	//Switch case
	switch(type)
	{
	   case 1: 
	       printf("%c is vowel.",ch);
		   break;
		case 2:
		   printf("%c is consonant.",ch);
		   break;
		case 3:
		   printf("%c is digit.",ch);
		   break;
		case 4:
		   printf("%c is special symbol.",ch);	
	}  
}
