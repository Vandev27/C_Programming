//Array using a pointer
#include<stdio.h>
void main()
{
	int temp,n,i,*start,*end;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	start=a;
	end=a+n-1;
	printf("Display the elements of orignal array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	//reverse 
	while(start<end)
	{
		temp=*start;
		*start = *end;
		*end = temp;
		start++;
		end--;	
	}	
   	printf("\nDisplay the elements of reverse array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
}
