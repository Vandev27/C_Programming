/*Write a programme to check a given number is a perfect number or not
with argument and with return value.*/
#include<stdio.h>
int perfect(int);
int perfect(int num)
{
	int i,sum=0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		return 1;
	}
	else
	{
	    return 0;
	}
}

void main()
{
	int num,res;
	printf("Enter the number\n");
	scanf("%d",&num);
	res=perfect(num);//Call by value
	if(res==1)
	{
		printf("NUmber is perfect");
	}
	else
	{
		printf("Number is not perfect.");
	}
}

