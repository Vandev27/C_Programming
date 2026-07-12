//Write a programme to count number of digits in given number
#include<stdio.h>
void main()
{
	int num,count=0;
	printf("Enter a nnumber.\n");
	scanf("%d",&num);
	//Loop
	while(num>0)
	{
		count++;
		num=num/10;
	}
	printf("The given number is %d digit number",count);
}
