//Write a programme to classify a person as Child,Teenage,Adult or Senior citizen.
/*If your switch expression is a logical condition, it will only ever be 0 or 1.
If your switch expression is a normal integer or char value, it can match many cases*/
#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age.\n");
	scanf("%d",&age);
	//Switch case
	switch(age/10)
	{
		case 0:
		  printf("Child");
		  break;
		case 1:
		   printf("Teenager");
		   break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		  printf("Adult");
		  break;
		case 7:
		case 8:
	    case 9:
			printf("Old age");
			break;
		default:
			printf("Age is incorrect")
	}
}
