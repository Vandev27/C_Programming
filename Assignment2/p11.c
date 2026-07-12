//Write a programme to find the smallest among of three numbers
#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	//Smallest among of three numbers
	if(num1==num2 && num2==num3)
	    printf("All numbers are equal");
	else if(num1<num2 && num1<num3)
	    printf("%d number is smaller",num1);
	else if(num2<num1 && num2<num3)
	    printf("%d number is smaller",num2);
	else if(num3<num1 && num3<num2)
	    printf("%d number is smaller",num3);
	else
	    printf("Numbers are not valid");
}
