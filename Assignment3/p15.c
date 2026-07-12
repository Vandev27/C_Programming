//Write a programme to determine admission eligibility based on marks in three subjects using nested if-else.
#include<stdio.h>
void main()
{
	int sci,mat,eng,total,per;
	printf("Enter your english marks.\n");
	scanf("%d",&eng);
	printf("Enter your mathematics marks.\n");
	scanf("%d",&mat);
	printf("Enter your science marks.\n");
	scanf("%d",&sci);
	total=mat+sci+eng;
	per=total/3;
	//If statement
	if(per>=60 && per<=100)
	{
		printf("Congratulation!! You are elligible for admission.");
	}
	else
	{
		printf("Sorry,you are not elligible for admission.");
	}
}
