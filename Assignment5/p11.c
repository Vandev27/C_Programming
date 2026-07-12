//Generate the fibbonacci series up to n terms.
#include<stdio.h>
void main()
{
	int i=1,n,a=0,b=1,next;
	printf("Enter ending of series.\n");
	scanf("%d",&n);
	//while loop
	while(i<=n)
	{
		printf("%d\t",a);
		next=a+b;
		a=b;
		b=next;
		i++;
	}
}
