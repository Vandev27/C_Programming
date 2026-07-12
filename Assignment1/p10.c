//Write a programme to clauculate the perimeter and area of square.
#include<stdio.h>
void main()
{
	int side,area,per;
	printf("Enter the value of side of square.\n");
	scanf("%d",&side);
	per=4*side;
	area=side*side;
	printf("Area of square = %d\n",area);
	printf("Perimeter of square = %d\n",per);
}
