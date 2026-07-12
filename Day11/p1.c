//Function - no arguments and no return value
#include<stdio.h>
void add();
void add()
{
	float a,b,sum;
	printf("Enter the value of a and b\n");
	scanf("%f%f",&a,&b);
	sum=a+b;
	printf("Sum = %.2f",sum);
}
void main()
{
	add();
}
