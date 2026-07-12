#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	//Switch case
	switch(num1>num2)// 0 or 1 (True or False)
	{
		case 0 :
			printf("%d number is greater",num2);
			break;
		case 1 :
			printf("%d number is greater",num1);
			break;
		default:
			printf("Invalid inputs");
	}
}
