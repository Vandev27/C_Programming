//Find the sum of all digit of a given n-digit number
#include<stdio.h>
void main()
{
	int num,sum=0,rem;
	printf("Enter the value of num\n");
	scanf("%d",&num);
	//Logic
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum of all digit number is %d",num);
}
