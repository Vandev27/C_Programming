//Nested loop- star pattern
#include<stdio.h>
void main()
{
	int row,i,j;
	printf("Enter the row\n");
	scanf("%d",&row);
	//Logic
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
