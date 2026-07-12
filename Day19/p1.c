//Write a programme to create structure in c.
#include<stdio.h>
struct Employee
{
	int eid;
	char ename[20];
	float esal;
};
void main()
{
    struct Employee e1;
	printf("Enter the detail of employee\n");
	printf("Enter the employee ID\n");
	scanf("%d",&e1.eid); 
	printf("Enter the employee Name\n");
	scanf("%s",&e1.ename); 
	printf("Enter the employee Sallary\n");
	scanf("%f",&e1.esal); 	
	printf("Display the details of Employee\n");
	printf("Eid = %d\n",e1.eid);
	printf("EName = %s\n",e1.ename);
	printf("ESallary = %.2f\n",e1.esal);
}
