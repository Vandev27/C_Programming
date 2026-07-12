//Write a programme to display the number of day in a month using switch case.
#include<stdio.h>
void main()
{
	int year,month;
	printf("Enter month number(1-12)\n");
	scanf("%d",&month);
	printf("Enter year\n");
	scanf("%d",&year);
	switch(month)
	{
		case 1: 
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Month has 31 days");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Month has 30 days");
			break;
		case 2:
			{
				if((year%400==0) || (year%4==0 && year%4!=0))
				     printf("Month has 29 days");
				else
				    printf("Month has 28 days"); 
			}
		    break;
		default:
			printf("Invalid choice");
	}
}
