//Write a programme to check whether a year is leap year or not
#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);
	// Check a year is leap or not
	if(year%400==0 || (year%4==0 && year%100!=0))
	   printf("%d year is leap year",year);
	else
	   printf("%d year is not leap year",year);
}
