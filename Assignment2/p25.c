//Write a programme to implement a simple calculator using if else if.
#include<stdio.h>
void main()
{
	int a,b,cal;
	char op;
	printf("Enter operator\n");
	scanf("%c",&op);
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	//Logic for calculator
	if(op=='+')
	{
		cal=a+b;
		printf("Sum = %d",cal);
	}
	else if(op=='-')
	{
		if(a>b)
		{
			cal=a-b;
		    printf("Difference = %d",cal);
		}
		else
		{
			cal=b-a;
		    printf("Difference = %d",cal);
		}
	}
	else if(op=='*')
	{
		cal=a*b;
		printf("Multiply = %d",cal);
	}
	else if(op=='/')
	{
		if(a>b)
		{
			cal=a/b;
		    printf("Divide = %d",cal);
		}
		else
		{
			cal=b/a;
		    printf("Divide = %d",cal);
		}
	}
	else
	{
		printf("Operator is invalid!!");
	}
}
