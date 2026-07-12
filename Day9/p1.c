//Prime number by while loop
#include<stdio.h>
void main()
{
	int num,count=0,i=1;
	printf("Enter the number\n");
	scanf("%d",&num);
    //Logic
    while(i<=num)
    {
    	if(num%i==0)
    	{
    		count++;
		}
		i++;
	}
	if(count==2)
	{
		printf("Number is prime");
	}
	else
	{
		printf("Number is composite");
	}
}
