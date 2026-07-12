//Write a programme to check the co-ordinate point x and y are lies in which quadrant.
#include<stdio.h>
void main()
{
	int x,y,quad;
	printf("Enter coordinates of x and y.\n");
	scanf("%d%d",&x,&y);
	//If statement
	if(x>0 && y>0)
	  quad=0;
	else if(x<0 && y>0)
	  quad=1;
	else if(x<0 && y<0)
	  quad=2;
	else if(x>0 && y<0)
	  quad=3;
	else if(x==0 && (y<0 || y>0))
	  quad=4;
	else if(y==0 && (x<0 || x>0))
	  quad=5;
	else if(x==0 && y==0)
	  quad=6;
	//Switch case
	switch(quad)
	{
		case 0:
			printf("Coordinate lie in first quadrant.");
			break;
		case 1:
			printf("Coordinate lie in second quadrant.");
			break;
		case 2:
			printf("Coordinate lie in third quadrant.");
			break;
		case 3:
			printf("Coordinate lie in fourth quadrant.");
			break;
		case 4:
			printf("Coordinate lie at x-axis");
			break;
		case 5:
			printf("Coordinate lie at y-axis");
			break;
		case 6:
			printf("Coordinate lie at origin");
	}
}
