//Function using call by address
//Addition with arguments and no return value
#include<stdio.h>
void add(int*,int*);
void add(int *a,int *b)//1000,1004
{
	int sum;
	sum=*a+*b;//*1000+*1004
	printf("Sum = %d",sum);
}
void main()
{
	int a,b;
	printf("Enter the value of a and b.\n");
	scanf("%d%d",&a,&b);
	add(&a,&b);//Call by address
	//add(1000,1004)
}
