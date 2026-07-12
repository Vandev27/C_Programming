//Find the HCF of two numbers using loop.
#include<stdio.h>
void main()
{
	int a,b,i=1,min,hcf;
	printf("Enter two numbers.\n");
	scanf("%d%d",&a,&b);
    if(a>b)
      min=b;
    else
      min=a;
	//Loop
	while(i<=min)
	{
		if(a%i==0 && b%i==0)
		{
			hcf=i;
		}
		i++;
	}
	printf("HCF = %d",hcf);
}
