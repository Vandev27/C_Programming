//Write a programme to check whether a number is multiple of 3 or 7
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	//Multiple of 3 or 7
	if(num%3==0 || num%7==0)
	    printf("%d number is multiple of 3 or 7",num);
	else
	    printf("%d number is not multiple of 3 or 7",num);
}
