//Write a programme to count the total number of factor of a number.
#include<stdio.h>
void main()
{
	int i=1,n,count=0;
	printf("Enter a number.\n");
	scanf("%d",&n);
	//Loop
	while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
	}
	printf("Total number of factors = %d",count);
}
