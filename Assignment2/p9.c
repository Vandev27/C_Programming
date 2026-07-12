//Write a programme to check whether a number is divisible by both 5 and 11.
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	//Number is divisible or not
	if(num%5==0 && num%11==0)
	    printf("%d number is divisible by both 5 and 11",num);
	else
	    printf("%d number is not divisible by both 5 and 11",num);
}
