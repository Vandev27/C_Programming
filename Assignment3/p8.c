//Write a programme to calculate a Insurance Premium Category.
#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	if(age>0 && age<25)
	{
		printf("You have high insurance premium category.");
	}
	else if(age>25 && age<50)
	{
		printf("You have medium insurance premium category.");
	}
	else if(age>50 && age<80)
	{
		printf("You have low medium insurance premium category.");
	}
	else
	{
		printf("Age is invalid!!");
	}
}
