//Write a programme to check perfect number or not.
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	//Loop for factors
	for(i=1;i<n;i++)
	{
	    if(n%i==0)
	    {
	       sum=sum+i;	
		}
	}
	if(sum==n)
	{
		printf("Number is perfect number.");
	}
	else
	{
		printf("Number is not perfect number.");	
	}
}
