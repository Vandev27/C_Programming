//Write a programme find the roots of given quadratic equation.
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,x,y;
	printf("Enter coefficient of quadratic equation a,b and c respectively.\n");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>0)
	{
		printf("Roots are real and distinct\n");
		x=(-b+sqrt(d))/2*a;
		y=(-b-sqrt(d))/2*a;
		printf("Roots are %d,%d",x,y);
	}
	else if(d<0)
	{
		printf("Roots are imaginary");
	}
	else if(d=0)
	{
		printf("Roots are real and equal\n");
		x=-b/(2*a);
		printf("Roots are %d %d",x,x);
	}
	}
