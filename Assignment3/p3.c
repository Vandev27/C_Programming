//Write a programme to determine whether a student gets a scholarship based on marks and attendance.
#include<stdio.h>
void main()
{
	int marks,att;
	printf("Enter marks\n");
	scanf("%d",&marks);
	printf("Enter attendance\n");
	scanf("%d",&att);
	//If case
	if((marks<=0 || marks>=100) || (att<=0 || att>=100))
	{
		printf("Marks or attendance are not valid!!");
	}
	else
	{
	switch((marks>=75 && marks<=100) && (att>=75 && marks<=100))
	{  
		case 0:
			printf("Sorry,You are not elligible for scholarship.");
			break;
		case 1:
			printf("Congratulation,You get scholarship!!");
			break;
	}
    }
}
