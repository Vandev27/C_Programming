//Write a programme to find the largest among three numbers
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers a,b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	//Largest among three numbers
	if(a==b && b==c)
	{
		printf("All numbers are same");
	}
	else if(a>b && a>c)
	{
		printf("A is greater");
	}
	else if(b>a && b>c)
	{
		printf("B is greater");
	}
	else if(c>a && c>b)
	{
		printf("C is greater");
	}
}
