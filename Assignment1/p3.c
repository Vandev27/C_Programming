//Write a programme to calculate the area of rectangle.
#include<stdio.h>
void main()
{
	float l,b,area;
	printf("Enter the length and breadth of rectangle.\n");
	scanf("%f%f",&l,&b);
	area=l*b;
	printf("The area of rectangle is %.2f",area);
}
