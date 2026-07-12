//Write a programme to check a number is divisible by both 4 and 6.
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	//Switch case
	switch(num%4==0 && num%6==0)
	{
	  	case 0:
	  		printf("Number is not divisible by both 4 and 6.");
	  		break;
	  	case 1:
	  		printf("Number is divisible by both 4 and 6.");
	}
}
