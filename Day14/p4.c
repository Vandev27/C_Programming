//Write a programme to maximum element of array.
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the value of array.\n");
	//Input using loop
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//Display original array
	printf("Display of original array = ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	//Logic for finding maximum element
	int max=a[0];
	for(i=0;i<n;i++)
	{
	  if(max<a[i])
	  {
	  	max = a[i];
	  }
	}
	printf("\nMaximum element of array = %d",max);
}
