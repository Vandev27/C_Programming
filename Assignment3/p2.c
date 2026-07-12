//Write a programme to check whether a number is divisible by 2 but not by 5.
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number.\n");
	scanf("%d",&num);
	//Switch case
	switch(num%2==0 && num%5!=0)
	{
		case 0:
			printf("Number is divisible by 2 and by 5");
			break;
		case 1:
			printf("Number is divisible by 2 but not by 5");
	}
}
