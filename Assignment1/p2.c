//Write a programme to calculate circumference of circle.
#include<stdio.h>
#define pi 3.14
void main()
{
    float r,cir;
	printf("Enter the radius of circle.\n");
	scanf("%f",&r);
	cir=2*pi*r;
	printf("The circumference of given radius is %.2f.",cir);
}
