//Function - no arguments and with return value
#include<stdio.h>
float add();
float add()
{
	float sum;
	float a,b;
	printf("Enter the value of a and b\n");
	scanf("%f%f",&a,&b);
	sum=a+b;
	 return sum;
}
void main()
{
	float res;
	res=add();
	printf("Sum = %.2f",res);
}
