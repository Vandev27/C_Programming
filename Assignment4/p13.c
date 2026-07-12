//Wtite a programme to check happy number.
#include<stdio.h>
void main()
{
	int n,temp,sum,rem;
	printf("Enter the number\n");
	scanf("%d",&n);
	//Logic
	while(temp!=1)
	{
		while(temp>0)
		{
		sum=0;
		rem = temp%10;
		sum+=rem*rem;
		temp=temp/10;
	    }
	    temp=sum;
	}
	if(temp==1)
	{
		printf("Happy Number");
	}
	else
	{
		printf("Not happy number");
	}
}
