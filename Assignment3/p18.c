//Write a programme to check either pass,fail or supply.
#include<stdio.h>
void main()
{
	int per,res;
	printf("Enter your percentage.\n");
	scanf("%d",&per);
	//If statement
	if(per>=0 && per<33)
	  res=1;
	else if(per>=33 && per<50)
	  res=2;
	else if(per>=50 && per<=100)
	  res=3;
	//Switch statement
	switch(res)
	{
		case 1:
			printf("Sorry,You are fail.");
			break;
		case 2:
			printf("You have getting supply.");
			break;
		case 3:
			printf("Congratulation,You have passed your class.");
			break;
		default:
			printf("There is invalid input.");
	}
}
