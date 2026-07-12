//Write a programme to find the factorial of given number.
#include<stdio.h>
void main()
{
	int i=1,n,f=1;
	printf("Enter the number for finding factorial.\n");
	scanf("%d",&n);
	//While loop
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("Factorial = %d",f);
}
