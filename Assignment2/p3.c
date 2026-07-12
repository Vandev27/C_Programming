//Write a programme to find the greater of two number using if-else
#include<stdio.h>
void main()
{
	float num1,num2;
	printf("Enter two numbers\n");
	scanf("%f%f",&num1,&num2);
	//Logic for checking greater
	if(num1==num2)
	{
	    printf("Both number are equal"); 
    } 
	else
	{
		if(num1>num2)
		    printf("%.2f is greater than %.2f",num1,num2);
		else
		    printf("%.2f is greater than %.2f",num2,num1);
	}
}
