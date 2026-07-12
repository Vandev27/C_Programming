//Write a programme to create structure in c using array.
#include<stdio.h>
struct Employee
{
	int eid;
	char ename[20];
	float esal;
};
void main()
{
    struct Employee e1[5];
    int i;
	printf("Enter the detail of employee\n");
	for(i=0;i<5;i++)
	{
	    printf("Enter the employee ID\n");
	    scanf("%d",&e1[i].eid); 
	    getchar();
	    printf("Enter the employee Name\n");
	    gets(e1[i].ename);
	    printf("Enter the employee Sallary\n");
	    scanf("%f",&e1[i].esal); 	
    }
	printf("Display the details of Employee\n");
	for(i=0;i<5;i++)
	{
		printf("Eid = %d\n",e1[i].eid);
	    printf("EName = %s\n",e1[i].ename);
	    printf("ESallary = %.2f\n",e1[i].esal);
	}
}
