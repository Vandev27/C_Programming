//Write a programme to check automorphic number
#include<stdio.h>
void main()
{
	int num,n1,sq,n2;
	printf("Enter the number.\n");
	scanf("%d",&num);
	//Logic
	n1=num%10;
	sq=num*num;
	n2=sq%10;
	if(n1==n2)
	{
		printf("Number is Automorphic");
	}
	else
	{
		printf("Number is not Automorphic.");
	}
}
