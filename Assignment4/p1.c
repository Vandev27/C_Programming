//Write a programme to check the given three digit number is pallandrome or not.
#include<stdio.h>
void main()
{
	int num,n1,n2;
	printf("Enter a three digit number.\n");
	scanf("%d",&num);
	//Logic for checking pallandrome or not
	n1=num%10;
	n2=num/100;
	if(n1==n2)
	{
		printf("The number is pallandrome");
	}
	else 
	{
		printf("The number is not pallandrome");
	}
}
