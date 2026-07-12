//Swapping of two variable with the help of 3 variables
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of A and B");
	scanf("%d%d",&a,&b);
	printf("The value of a before swapping =%d",a);
	printf("The value of b before swapping =%d",b);
	//Logic for swapping
	c=a;
	a=b;
	b=c;
	printf("The value of a after swapping =%d",a);
	printf("The value of b after swapping =%d",b);	
}
