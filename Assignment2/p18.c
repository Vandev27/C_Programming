//Write a programme to calculate electricity bill according to units 
#include<stdio.h>
void main()
{
	int units,pay;
	printf("Enter the value of units of electricity bill.\n");
	scanf("%d",&units);
	//Logic
	if(units>=0 && units<=100)
	{
		pay=units*3;
		printf("The total payment of your electricity bill = %d",pay);
	}
	else if(units>100 && units<=200)
	{
		pay=units*5;
		printf("The total payment of your electricity bill = %d",pay);
	}
	else if(units>200 && units<=300)
	{
		pay=units*7;
		printf("The total payment of your electricity bill = %d",pay);
	}
	else if(units>300)
	{
		pay=units*8;
		printf("The total payment of your electricity bill = %d",pay);
	}
	else
	{
		printf("Units of electricity bill is not valid!!");
	}
}
