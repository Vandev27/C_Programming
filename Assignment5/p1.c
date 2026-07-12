//Write a programme to print numbers from 1 to n.
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter the ending of series.\n");
	scanf("%d",&n);
	//While loop
	while(i<=n)
	{
		printf("%d\t",i);
		i++;
	}
}
