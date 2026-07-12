//Write a program to print a counting of square of even natural number from 1 to n.
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter ending of series.\n");
	scanf("%d",&n);
	//Loop
	for(i=2;i<=n;i=i+2)
	{
		printf("%d\t",i*i);
	}
}
