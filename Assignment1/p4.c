//Write a programme to calculate the perimeter of rectangle.
#include<stdio.h>
void main()
{
	float l,b,per;
	printf("Enter the length and breadth of rectangle.\n");
	scanf("%f%f",&l,&b);
	per=2*(l+b);
	printf("The perimeter of rectangle is %.2f",per);
}
