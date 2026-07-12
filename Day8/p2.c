//Loop programme - reverse
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the starting digit of series\n");
	scanf("%d",n);
	//Reverse logic
	for(i=n;i>=1;i--)
	{
		printf("%d\t",i);
	}
}
