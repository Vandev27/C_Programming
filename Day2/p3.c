//Program to calculate area of circle
#include<stdio.h>
#define PI 3.14
void main()
{
	float r,area;
	printf("Enter the value of radius");
	scanf("%f",&r);
	area=PI*r*r;
	printf("Area of given radius is %.2f",area);
}
