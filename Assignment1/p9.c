//Write a programme to calculate the perimeter of traingle.
#include<stdio.h>
void main()
{
	float a,b,c,per;
	printf("Enter the value of sides a,b and c.\n");
	scanf("%f%f%f",&a,&b,&c);
	per=a+b+c;
	printf("Perimeter of triangle = %.2f",per);
}
