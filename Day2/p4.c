//Programme to calculate Area of Triangle
#include<stdio.h>
#define C 0.5
void main()
{
	float b,h,area;
	printf("Enter the value of base and height");
	scanf("%f%f",&b,&h);
	area=C*b*h;
	printf("The area of triangle is %.2f",area);

}
