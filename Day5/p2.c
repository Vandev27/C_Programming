#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of 3 sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b && b==c)
        printf("Triangle is equilateral");
    else if(a==b && b!=c)
        printf("Triangle is isosceles");
    else if(a!=b && b==c)
        printf("Triangle is isoceles");
    else if(a!=b && b!=c)
        printf("Triangle is scalen");
}
