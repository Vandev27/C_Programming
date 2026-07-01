//Write a programme to convert a distance from km to mm.
#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter the value of distance in km\n.");
	scanf("%d",&num1);
	num2=num1*1000000;
	printf("The distance in mm is %d.",num2);
}
