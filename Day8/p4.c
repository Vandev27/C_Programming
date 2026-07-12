//Loop for factor
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the value for calculating factor\n");
	scanf("%d",&n);
	printf("The factorial of given number are = ");
	//Logic
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		 printf("%d\t",n/i);
	}
}
