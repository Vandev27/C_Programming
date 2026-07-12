//Write a programme to print the table of given number.
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter a number.\n");
	scanf("%d",&n);
	//While loop
	while(i<=10)
	{
		printf("%d*%d = %d\n",n,i,n*i);
		i++;
	}
}
