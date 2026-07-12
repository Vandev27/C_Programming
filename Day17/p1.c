//sparse matrix
#include<stdio.h>
void main()
{
	int r,c,i,j,count=0;
	printf("Enter the row and col");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the elements of matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			{
				count++;
			}
		}
	}
	printf("Display the elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//sparse checking
	if(count>((r*c)/2))
     printf("Sparse");
	else
	  printf("not sparse");	
		
	
}
