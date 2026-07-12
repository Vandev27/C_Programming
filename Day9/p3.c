//loop - hcf find
#include<stdio.h>
void main()
{
	int i,num1,num2,min,hcf=1;
	printf("Enter the value of numbers\n");
	scanf("%d%d",&num1,&num2);
	//Logic implementation
	min=(num1<num2)?num1:num2;
	for(i=1;i<=min;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			hcf=i;
		}
	}
	printf("HCF is = %d",hcf);
}
