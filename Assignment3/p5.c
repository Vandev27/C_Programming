//Write a programme to check whether three sides can form a valid triangle.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three sides of triangle.\n");
	scanf("%d%d%d",&a,&b,&c);
	//Switch case
	switch((a+b>c) && (a+c>b) && (b+c>a))
	{
		case 0:
			printf("Three sides can not form a valid triangle");
			break;
		case 1:
			printf("Three sides can form a valid triangle.");
	}
}
