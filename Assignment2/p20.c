//Write a programme to find the second largest among three numbers.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers.\n");
	scanf("%d%d%d",&a,&b,&c);
	//Logic
	if((a>=b && a<=c) || (a>=c && a<=b))
	  printf("%d num is second largest.",a);
	else if((b>=a && b<=c) || (b>=c && b<=a))
	  printf("%d num is second largest.",a);
	else if((c>=a && c<=b) || (c>=b && c<=a))
	  printf("%d num is second largest.",c);
	else
	  printf("Numbers are not valid");
}
