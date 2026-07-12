//Write a programme to calculate employee bonus based on salary slabs.
#include<stdio.h>
void main()
{
	int sal,bonus;
	printf("Enter your salary.\n");
	scanf("%d",&sal);
	//Logic
	if(sal<=20000)
	{
		bonus=(20*sal)/100;
		printf("Your bonus is = %d",bonus);
	}
	else if(sal>20000 && sal<=50000)
	{
		bonus=(15*sal)/100;
		printf("Your bonus is = %d",bonus);
	}
	else if(sal>50000 && sal<=100000)
	{
		bonus=(10*sal)/100;
		printf("Your bonus is = %d",bonus);
	}
	else if(sal>100000)
	{
		bonus=(5*sal)/100;
		printf("Your bonus is = %d",bonus);
	}
	else
	{
		printf("The value of your salary is invalid!!");
	}
}
