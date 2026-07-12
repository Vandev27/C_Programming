//Write a programme to determine whether a person is elligible for driving license or not.
#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	switch(age<70 && age>18)
	{
		case 0:
			printf("Sorry, You are not elligible for driving license.");
			break;
		case 1:
			printf("Congratulation, You are elligible for driving license.");
	}
}
