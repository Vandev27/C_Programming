//Write a programme to reverse of array.
#include<stdio.h>
void main()
{
	int i,n,temp;
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
	//Logic for reverse array using loop
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	//Display Reverse array
	printf("\nDisplay of reverse array = ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
