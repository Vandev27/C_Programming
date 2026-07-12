//Write a programme to determine the type of angle.
#include<stdio.h>
void main()
{
	int ang,type;
	printf("Enter angle.\n");
	scanf("%d",&ang);
	//If statement
	if(ang>0 && ang<90)
	   type=1;
	else if(ang==90)
	   type=2;
	else if(ang>90 && ang<180)
	   type=3;
	else if(ang==180 || ang==0)
	   type=4;
	//Switch case
	switch(type)
	{
		case 1:
			printf("Angle is acute");
			break;
		case 2:
			printf("Angle is right");
			break;
		case 3:
			printf("Angle is obtuse");
			break;
		case 4:
			printf("Angle is straight");
			break;
		default:
			printf("Sorry, we are unable to specify angle");
	}
}
