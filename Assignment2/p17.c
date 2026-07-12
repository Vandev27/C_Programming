//Write a programme to check whether a triangle is equilateral,isosceles or scalene.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	//Check triangle - equilateral,isossceles or scalene
	if(a==b && b==c && c==a)
	    printf("Triangle is equilateral");
	else if(a==b || b==c || c==a)
	    printf("Triangle is isosceles");
	else
	    printf("Triangle is scalen");
}
