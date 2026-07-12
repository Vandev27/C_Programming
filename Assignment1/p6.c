//Write a programme to calculate the volume of sphere.
#include<stdio.h>
#define pi 3.14
void main()
{
	float r,v;
	printf("Enter the value of radius of sphere.\n");
	scanf("%f",&r);
	v=(4*pi*r*r*r)/3;
	printf("The volume of sphere is %.2f",v);
}
