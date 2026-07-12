//Write a programme to find sum of array.
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the value of array.\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		sum=sum+a[i];
	}
	printf("Sum of array = %d",sum);
}
