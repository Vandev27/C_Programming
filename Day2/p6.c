// To reverse a three digit value
#include<stdio.h>
void main()
{
	int num,d1,d2,d3,rev;
	printf("Enter the value of 3 digit number");
	scanf("%d",&num);
	d1=num/100;
	d2=(num/10)%10;
	d3=num/10;
	rev=d3*100+d2*10+d1*1;
	printf("Reverse of given number is %d",rev);
}
