//Loop programme for even numbers
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the ending number");
	scanf("%d",&n);
	// logic for even numbers
	for(i=0;i<=n;i=i+2)
	{
		printf("%d\t",i);
	}
}
