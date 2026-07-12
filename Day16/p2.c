//Write a programme to transpose of matrix.
#include<stdio.h>
void main()
{
	int i,j,r,c;
	printf("Enter the size of matrix.\n");
	scanf("%d%d",&r,&c);
	//Taking input of matrix
	int a[r][c];
	printf("Enter the value of matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//Display matrix
	printf("Original matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//Display Transpose matrix
	printf("Transpose matrix:\n");
	for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
