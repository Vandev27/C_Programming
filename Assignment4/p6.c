//Write a programme to check a given number is armstrong or not.
#include<stdio.h>
#include<math.h>
void main()
{
	int num,sum=0,n,digit;
	printf("Enter the number\n");
	scanf("%d",&num);
	n=num;
	//Loop for armstrong
	while(num>0)
	{
	  digit=num%10;
	  sum=sum+pow(digit,3);
	  num=num/10;
	}
	if(n==sum)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not Armstrong");
	}
}
