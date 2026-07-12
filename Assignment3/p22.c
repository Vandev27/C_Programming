//Write a programme to print the counting of even natural number from 1 to n.
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the ending of series\n");
	scanf("%d",&n);
	//Loop
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		   printf("%d\t",i);
	}
}
