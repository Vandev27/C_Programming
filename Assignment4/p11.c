//Write a programme to check perfect square number.
#include<stdio.h>
#include<math.h>
void main()
{
	int num,root;
	printf("Enter the number.\n");
	scanf("%d",&num);
	//Logic
	root=sqrt(num);
	printf("%d\n",root);
	if(root*root==num)
	{
		printf("Number is perfect square number");
	}
	else
	{
		printf("Number is not perfect square number.");
	}
}
