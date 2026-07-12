//Write a programme to check whether a person is eligible to vote(age>=18)
#include<stdio.h>
void main()
{
   int age;
   printf("Enter your age\n");
   scanf("%d",&age);
   //Condition for elligible to vote
   if(age>=18)
       printf("You are elligible to vote!!");
	else
	   printf("Sorry, you are not elligible");	
} 
