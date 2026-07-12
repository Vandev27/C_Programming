//Write a programme to find the sum of reverse diagonal element of matrix.
#include<stdio.h>
void main()
{
    int c,r,i,j,sum=0;
    printf("Enter the size of r and c.\n");
    scanf("%d%d",&r,&c);
    int a[r][c];
    if(r==c){
    //To take input of matrix
    printf("Enter the value of matrix.\n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	//To give output of matrix
	printf("The value of matrix.\n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d\t",a[i][j]);
    		if(i+j==r-1)
    		{
    			sum=sum+a[i][j];
			}
		}
		printf("\n");
	}
	printf("Sum of diagonal elements = %d",sum);
    }
    else
    {
    	printf("Invalid matrix!!");
	}
}
