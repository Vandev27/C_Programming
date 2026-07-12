//Write a programme to calculate the area of different shape using switch case menu driven programming.
#include<stdio.h>
#define pi 3.14
void main()
{
	int r,s,l,b,area,h,w,choice;
	printf("Choose a shape for calculating area.\n");
	printf("Choose 1 for circle\n");
	printf("Choose 2 for square\n");
	printf("Choose 3 for rectangle\n");
	printf("Choose 4 for triangle\n");
	scanf("%d",&choice);
	//Switch case 
	switch(choice)
	{
		case 1:
			printf("Enter the radius of circle.\n");
			scanf("%d",&r);
			area=2*pi*r;
			printf("Area of circle = %d",area);
		    break;
		case 2:
			printf("Enter the side of square\n");
			scanf("%d",&s);
			area=s*s;
			printf("Area of square = %d",area);
			break;
		case 3:
		    printf("Enter the length and breadth of rectangle\n");
			scanf("%d%d",&l,&w);
			area=l*w;
			printf("Area of rectangle = %d",area);
			break;
		case 4:
		    printf("Enter the base and height of triangle\n");
			scanf("%d%d",&b,&h);
			area=0.5*b*h;
			printf("Area of trianglr = %d",area);
			break;
		default:
		    printf("Invalid choice!!");
	}
}
