#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	if(a==b)
	{
		printf("Both are equal");
	}
	else
	{
		if(a>b)
		{
			printf("A is greater");
		}
		else
		{
		    printf("B is greater");	
		}
	}
}
