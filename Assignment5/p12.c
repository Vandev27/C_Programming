//Write a programme to print all factors of given number.
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter the number.\n");
	scanf("%d",&n);
	printf("Factor = ");
	//Loop
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
		}
		i++;
	}
}
