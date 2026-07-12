//Array input and output.
#include<stdio.h>
void main()
{
    int c,r,i,j;
    printf("Enter the size of r and c.\n");
    scanf("%d%d",&r,&c);
    int a[r][c];
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
		}
		printf("\n");
	}
}
