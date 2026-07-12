//Write a programme to print the series of odd natural number.
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the ending of series.\n");
	scanf("%d",&n);
	//Loop
	for(i=1;i<=n;i+=2)
	{
		printf("%d\t",i);
	}
}
