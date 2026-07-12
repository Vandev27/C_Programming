//Function - with arguments and no return value
#include<stdio.h>
void add(float,float);
void add(float p,float q)
{
	float sum;
	sum=p+q;
	printf("Sum = %.2f",sum);
}
void main()
{
	float a,b;
	printf("Enter the value of a and b\n");
	scanf("%f%f",&a,&b);
	add(a,b);
}
