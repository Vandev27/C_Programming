//Write a program to find the maximum among four numbers.
#include<stdio.h>
void main()
{
	int num1,num2,num3,num4;
	printf("Enter four numbers\n");
	scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
	//Using nested if else
	if(num1>num2)
	{
		if(num1>num3)
		{
		  if(num1>num4)
		  {
		  	printf("%d number is maximum",num1);
		  }
		  else
		  {
		  	printf("%d number is maximun",num4);
		  }
		}
		else
		{
		   if(num3>num4)
		    {
		    	printf("%d number is maximum",num3);
			}
			else
			{
				printf("%d number is maximum",num4);
			}
		}
    }
	else
	{
		if(num2>num3)
		{
			if(num2>num4)
			{
				printf("%d number is maximum",num2);
			}
			else
			{
				printf("%d number is maximum",num4);
			}
		}
		else
		{
			if(num3>num4)
			{
				printf("%d number is maximum",num3);
			}
			else
			{
				printf("%d number is maximum",num4);
			}
		}
	}
}
