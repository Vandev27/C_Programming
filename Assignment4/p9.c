//Write a programme to check the given number is spy or not.
#include<stdio.h>
void main()
{
	int num,sum=0,mul=1,rem;
	printf("Enter the number.\n");
	scanf("%d",&num);
	//Loop
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		mul=mul*rem;
		num=num/10;
	}
	if(sum==mul)
	{
		printf("Spy number");
	}
	else
	{
		printf("Not Spy number");
	}
}
