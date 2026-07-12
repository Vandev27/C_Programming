//Write a programme to find a greater between 3 numbers using switch case.
#include<stdio.h>
void main()
{
	int a,b,c,max;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	//If statement
	if(a==b && b==c)
	   max=0;
	else if(a>b && a>c)
	   max=1;
	else if(b>a && b>c)
	   max=2;
	else if(c>a && c>b)
	   max=3;
	//Switch statement
	switch(max)
	{
		case 0:
			printf("All numbers are equal");
			break;
		case 1:
			printf("%d is greater",a);
		    break;
		case 2:
			printf("%d is greater",b);
			break;
		case 3:
			printf("%d is greater",c);
	}
}
