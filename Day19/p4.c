//Structure Vs UNion - size
#include <stdio.h>
struct Employee
{
	int eid;
	char ename[20];
	float esal;
};
union Employee1
{
	int eid;
	char ename[20];
	float esal;
};
void main()
{
	printf("Size of structure = %d\n",sizeof(struct Employee));
	printf("Size of union = %d\n",sizeof(union Employee1));
}
