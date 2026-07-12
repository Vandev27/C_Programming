//Write a programme to check whether a number is three digit number or not.
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a three digit number.\n");
	scanf("%d",&num);
	if(num>=100 && num<=999)
	{
		printf("The number is three digit number.");
	}
	else
	{
		printf("The number is not three digit number.");
	}
}
