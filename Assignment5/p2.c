//Write a programme to print number from 10 to n.
#include<stdio.h>
void main()
{
	int i=10,n;
	printf("Enter ending of series.\n");
	scanf("%d",&n);
	//While loop
	while(i<=n)
	{
		printf("%d\t",i);
		i++;
	}
}
