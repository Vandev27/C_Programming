//Array using a pointer
#include<stdio.h>
void main()
{
	int n,i,*p;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;//1000
	printf("Display the elements of array\n");
	for(i=0;i<n;i++)
	{
		//printf("%d\t",*p++);
		printf("%d\t",*(p+i));
	}	
		
}
