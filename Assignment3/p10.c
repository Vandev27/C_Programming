//Write a programme to display the day of the week using switch case.
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number(1-7)\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Invalid choice!!");
	}
}
