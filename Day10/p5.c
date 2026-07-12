//Nested loop - increasing number
#include<stdio.h>
void main()
{
	int row,i,j,a=1;
	printf("Enter the row\n");
	scanf("%d",&row);
	//Logic
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",a);
			a++;
		}
		printf("\n");
	}
}
