//Write a programme to check duck number.
#include<stdio.h>
void main()
{
	int num,rem,duck;
	printf("Enter the number.\n");
	scanf("%d",&num);
	//Logic
	while(num>10)
	{
		rem=num%10;
		if(rem==0)
		{
		   duck=1;
		   break;
	    }
	    printf("%d",rem);
		num=num/10;
	}
	if(duck==1)
	{
		printf("Duck number");
	}
	else
	{
		printf("Not Duck number");
	}
}
