//Nested loop - Column print pattern
#include<stdio.h>
void main()
{
	int row,i,j;
	printf("Enter the value of row\n");
	scanf("%d",&row);
	//Logic
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
