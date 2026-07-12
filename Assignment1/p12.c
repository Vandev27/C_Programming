/*Write a programme to calculate gross salary and net salary take a input basic sallery from user 
and Ta will 10% of basic salary, da will 5% of bs, pf will be 7.8% of bs.*/
//bs,gs,ns,ta,da,pf
#include<stdio.h>
void main()
{
    float bs,gs,ns,ta,da,pf;
	printf("Enter the value of your basic salary.\n");
	scanf("%f",&bs);
	ta=(bs*10)/100;
	da=(bs*5)/100;
	pf=(bs*7.8)/100;
	gs=bs+ta+da;
	ns=gs-pf;
	printf("The gross salary = %.2f\n",gs);
	printf("The net salary = %.2f\n",ns);
}
