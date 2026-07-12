//Write a programme to determine if a person is elligible for a loan.
#include<stdio.h>
void main()
{
	int age,mi,cs,bs;
	printf("Enter your age.\n");
	scanf("%d",&age);
	printf("Enter your monthly income.\n");
	scanf("%d",&mi);
	printf("Enter your credit score.\n");
	scanf("%d",&cs);
	printf("Enter your business stability in years.\n");
	scanf("%d",&bs);
	//Logic
	if(age>=21 && age<=70)
	{
		if(mi>=25000)
		{
		   if(cs>=700)
		   {
		   	  if(bs>2)
		   	  {
		   	  	printf("Congratulation,You are elligible for getting the loan!!");
			  }
			  else
			  {
			  	printf("Sorry you are not elligible because of business stability");
			  }
		   }
		   else
		   {
		   	printf("Sorry you are not elligible because of credit score");
		   }	
		}
		else
		{
		printf("Sorry you are not elligible because of monthly income.");	
		}
	}
	else
	{
		printf("Sorry you are not elligible because of age criteriaon.");
	}
} 
