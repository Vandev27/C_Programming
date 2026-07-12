//Function - with arguments and with return value
#include<stdio.h>

float add(float,float);
float add(float a, float b)
{
     return a+b;
}
void main()
{
	float a,b;
	printf("Enter the value of a and b\n");
	scanf("%f%f",&a,&b);
    printf("Sum = %.2f",add(a,b));
}
