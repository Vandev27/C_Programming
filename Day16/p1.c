//wRITE A programme to multiply two matrix
#include<stdio.h>
void main()
{
	int r1,c1,r2,c2,i,j;
	//First Matrix size
	printf("Enter the size of first matrix");
	scanf("%d%d",&r1,&c1);
	//Second matrix size
	printf("Enter the size of second matrix");
	scanf("%d%d",&r2,&c2);
	if(c1==r1)
	{
		int a[r1][c1],b[r2][c2];
		//Input of first matrix
		printf("Enter the first matrix value :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		//Input of second matrix
		printf("Enter the first matrix value :\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		//Display of first matrix
		printf("The first matrix value :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",a[i][j]);
			}
		    	printf("\n");
		}
		//Display of second matrix
		printf("The second matrix value :\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		//Making multiplication matrix
		int k,mul[i][j];
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{ 
              mul[i][j]=0;
				for(k=0;k<c1;k++)
				{
					mul[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		//Display multiplication matrix
		printf("The multiplication matrix value :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",mul[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Invalid matrix!!");
	}
}
