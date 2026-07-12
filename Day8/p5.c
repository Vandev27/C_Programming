//Loop programe to print fabbanaci series
#include<stdio.h>
void main()
{
	int n,i,a=-1,b=1,sum;
	printf("Enter the ending of series\n");
	scanf("%d",&n);
	//Logic
	for(i=1;i<=n;i++)
	{
		sum=a+b;
		printf("%d\t",sum);
		a=b;
		b=sum;
	}
}
