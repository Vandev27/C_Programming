//Write a programme to sort array.
#include<stdio.h>
void main()
{
	int i,r,j,temp=0;
	printf("Enter the number of elements in array.\n");
	scanf("%d",&r);
	int a[r];
	//Take input array
	printf("Give value of array: \n");
	for(i=0;i<r;i++)
	{
		scanf("%d",&a[i]);
	}
	//Printing of original array
		for(i=0;i<r;i++)
	{
		printf("%d\t",a[i]);
	}
	//Sorting of array
	for(i=0;i<r;i++)
	{
		for(j=i+1;j<r;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
     printf("\n");
	//Printing of sorted array
		for(i=0;i<r;i++)
	{
			printf("%d\t",a[i]);
	}
}
