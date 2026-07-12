//Write a programme to print the sum of numbers from 1 to n.
#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("Enter ending of series.\n");
	scanf("%d",&n);
	//While loop
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum = %d",sum);
}
