//Write a programme to check whether a number is prime or not.
#include<stdio.h>
void main()
{
	int i=1,n,count=0;
	printf("Enter the number.\n");
	scanf("%d",&n);
	//While loop 
	while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
	   i++;
	}
	if(count==2)
	{
		printf("%d number is prime.",n);
	}
	else
	{
		printf("%d number is not prime.",n);
	}
}
