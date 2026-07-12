//Write a programme to print odd numbers between 1 and n.
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter ending of series.\n");
	scanf("%d",&n);
	//While loop
	while(i<=n)
	{
	   printf("%d\t",i);
	   i+=2;	
	}
}
