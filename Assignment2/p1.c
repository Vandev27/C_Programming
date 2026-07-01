// Write a programme to check whether a number is positive,negative or zero
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the integer value\n");
	scanf("%d",&num);
	// Condition for check the integer
	if(num=0)
	{
		printf("The integer is zero");	
	}
	else if(num>0)
	{
		printf("The integer is positive");
	}
	else
	{
		printf("The integer is negative");
	}
}
