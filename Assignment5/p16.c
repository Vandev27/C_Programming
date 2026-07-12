//Write a programme to print the series 1 11 111 1111.....
#include<stdio.h>
void main()
{
	int i=1,n,res=0;
	printf("Enter number of series.\n");
	scanf("%d",&n);
	//while loop
	while(i<=n)
	{
		res=res*10+1;
		printf("%d\t",res);
		i++;
	}
}
