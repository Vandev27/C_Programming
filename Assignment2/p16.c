//Write a program to determine whether a triangle is valid based on three angles.
#include<stdio.h>
void main()
{
	int a1,a2,a3,sum;
	printf("Enter the angle of triangle\n");
	scanf("%d%d%d",&a1,&a2,&a3);
	sum=a1+a2+a3;
	//Triangle is valid
	if(sum==180)
	    printf("The triangle is valid based on three angles");
	else
	    printf("The triangle is not valid based on three angles"); 
}
