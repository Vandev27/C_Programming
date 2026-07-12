//Write a programme to addition of two numbers.
#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("Enter the size of matrix");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],sum[r][c];
	//COndition check : square or not
	if(r==c)
	{
		//Input of matrix
		printf("Enter the elements of first matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of second matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		//Addition of matrix
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
					sum[i][j]=a[i][j] + b[i][j];
			}
		}
		//Display matrix
		//first matrix
		printf("First matrix:\n");
			for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		//second matrix
		printf("\nSecond matrix:\n");
			for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		//Display resultant matrix
		printf("\nResultant matrix:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",sum[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Invalid size of matrix!!");
	}
}
