//Switch_case programme- week days
#include<stdio.h>
void main()
{
	int choice;
	printf("Enter the choice between 1 to 7\n");
	scanf("%d",&choice);
	//Switch statement
	switch(choice)
	{
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
		    printf("Invalid choice");		
	}
	
}
