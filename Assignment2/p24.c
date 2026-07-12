//Write a programme to find the greatest among three numbers using nested if-else.
#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("Enter three numbers.\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	//Logic
	if(num1==num2 && num2==num3)
	{
		printf("All numbers are equal.");
	}
	else
	{
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("%d num is greater",num1);
		}
		else
		{
			printf("%d num is greater.",num3);
		}
	}
	else
	{
		if(num2>num3)
		{
			printf("%d num is greater.",num2);
		}
		else
		{
			printf("%d num is greater.",num3);
		}
	}
    }  
}
