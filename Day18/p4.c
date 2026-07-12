//Use of realloc() function- Dynamic memory allocation for array
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	int *ptr;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	ptr = calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Error in memory allocation\n");
		exit(0);//Function which is use to abnormaly
	//	return;//Stop the programme
	}
	else
	{
		printf("Enter the elements of array\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",(ptr+i));
		}
		printf("Display the elements of array\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",*(ptr+i));
		}
//		free(ptr);
		//realloc
		printf("\nEnter the number of elements\n");
	    scanf("%d",&n);
	    int *ptr1;
	    ptr1 = realloc(ptr,n*sizeof(int));
	    printf("Enter the elements of array\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",(ptr+i));
		}
		printf("Display the elements of array\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",*(ptr+i));
		}
		free(ptr);
	}
	
}
