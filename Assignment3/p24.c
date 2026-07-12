//Write a programme to print a counting of square of natural numbers 1 to n.
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the ending of series.\n");
	scanf("%d",&n);
	//Loop
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i*i);
	}
}
