//Write a programme to print a series 9 99 999 9999......
#include<stdio.h>
void main()
{
	int i=1,n,res=0;
	printf("Enter ending of series.\n");
	scanf("%d",&n);
	//While loop
	while(i<=n)
	{
		res=res*10+9;
		printf("%d\t",res);
		i++;
	}
}
