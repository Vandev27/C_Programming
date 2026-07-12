/*Write a programme to check a given number is a perfect number or not
with argument and no return value.*/
#include<stdio.h>
void perfect(int);
void perfect(int num)
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
		printf("Number is perfect");
	}
	else
	{
		printf("Number is not perfect.");
	}
}

void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	perfect(num);
}
