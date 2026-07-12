//Write a programme to volume of cuboid.
#include<stdio.h>
void main()
{
	float l,b,h,v;
	printf("Enter the length,breadth and height of cuboid.\n");
	scanf("%f%f%f",&l,&b,&h);
	v=l*b*h;
	printf("The volume of cuboid is %.2f",v);
}
