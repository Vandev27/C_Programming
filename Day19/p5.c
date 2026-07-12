//Structure Vs UNion - data access
#include <stdio.h>
union Emp
{
	int eid;
	float esal;
};
void main()
{
	union Emp e1;
	printf("Enter Employee Id\n");
	scanf("%d",&e1.eid);
	printf("Enter Employee Sallary\n");
	scanf("%f",&e1.esal);
	printf("Display the details of employee\n");
	printf("Eid = %d\n",e1.eid);
	printf("Esal = %f\n",e1.esal);
}
