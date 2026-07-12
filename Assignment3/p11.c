//Write a program to perform arithmetic operations using switch case.
#include<stdio.h>
void main()
{
	int num1,num2;
	char op;

    printf("Enter operator\n");
	scanf("%c",&op);
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	//Use " %c" instead of "%c" ? the leading space tells scanf to ignore whitespace (like Enter or spaces).
	
	switch(op)
	{
		case '+':
			printf("Sum = %d",num1+num2);
			break;
		case '-':
		    {
		    	if(num1>num2)
		    	   printf("Difference = %d",num1-num2);
		    	else
		    	   printf("Difference = %d",num2-num1);
			}
			break;
		case '*':
		    printf("Multiplication = %d",num1*num2);
		    break;
		case '/':
			{
				if(num1>num2)
				    printf("Divide = %d",num1/num2);
				else
				    printf("Divide = %d",num2/num1);
			}
			break;
		default:
			printf("Invalid operator");
	}
}
