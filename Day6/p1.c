//Switch case- Even or odd
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	//Switch case
		switch(num%2)//0 or 1
		{
			case 0:
				printf("Number is even");
				break;
			case 1:
				printf("Number is odd");
				break;
			default:
				printf("Number is invalid");
		}
}
