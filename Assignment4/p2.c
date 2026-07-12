//Write a programme to check a three digit number is armstrong or not.
#include<stdio.h>
#include<math.h>
void main()
{
	int num,n1,n2,n3,sum;
	printf("Enter a 3 digit number.\n");
	scanf("%d",&num);
	//Logic for checking armstrong
	n1=num%10;
	n2=(num/10)%10;
	n3=num/100;
	sum=pow(n1,3)+pow(n2,3)+pow(n3,3);
	if(num==sum)
	{
		printf("%d number is armstrong",num);
	}
	else
	{
		printf("%d Number is not armstrong",num);
	}
}
