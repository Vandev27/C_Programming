//Write a programme to convert the temperature from fareheniet to degree celsius.
#include<stdio.h>
void main()
{
	float f,c;
	printf("Enter the value of temprature in farehniet.\n");
	scanf("%f",&f);
	c=((f-32)*5)/9;
	printf("The value of temprature in celcius is %.2f",c);
}
