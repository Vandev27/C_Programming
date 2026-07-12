//Write a programme to print all even number between 1 and n.
#include<stdio.h>
void main()
{
	int i=2,n;
	printf("Enter ending of series.\n");
	scanf("%d",&n);
	//While loop
	while(i<=n)
	{
	   printf("%d\t",i);
	   i+=2;	
	}
}
