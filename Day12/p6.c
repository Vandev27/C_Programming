/*Write a programme to swapping two numbers using call by address*/
#include<stdio.h>
int swapp(int*,int*);
int swapp(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("After swapping value of a in function definition = %d\n",*a);
	printf("After swapping value of b in function defintion = %d\n",*b);
}
void main()
{
	int a,b;
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping value of a in main = %d\n",a);
	printf("Before swapping value of b in main = %d\n",b);
	swapp(&a,&b);
	printf("After swapping value of a in main = %d\n",a);
	printf("After swapping value of b in main = %d\n",b);
}
