//Write a programme to print 1/1,1/2,1/3,........1/n.
#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter the ending series.\n");
	scanf("%d",&num);
	//Logic 
	for(i=1;i<=num;i++)
	{
		printf("1/%d\t",i);
	}
}
