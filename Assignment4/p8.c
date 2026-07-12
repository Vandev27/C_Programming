//Write a programme to sum of given number.
#include<stdio.h>
void main()
{
	int num,sum=0,rem;
	printf("Enter the number\n");
	scanf("%d",&num);
	//While loop
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("The sum of given number = %d",sum);
}
