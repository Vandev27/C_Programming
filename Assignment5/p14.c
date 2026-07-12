//Write a programme to find the power of a number (a^b) using loop.
#include<stdio.h>
void main()
{
	int a,b,i=1,res=1;
	printf("Enter base and exponent.\n");
	scanf("%d%d",&a,&b);
	//while loop
	while(i<=b)
	{
		res=res*a;
		i++;
	}
	printf("The power of number = %d",res);
}
