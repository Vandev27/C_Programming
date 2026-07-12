//Programme to calculate the simple interest : principal, rate and time
#include<stdio.h>
void main()
{
    float p,r,t,si;
	printf("Enter the value of principal, rate and time");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("Simple interest = %f",si);	
}
