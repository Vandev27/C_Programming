//Write a programme to convert the temperature from degree celsius to fareheniet .
#include<stdio.h>
void main()
{
	float f,c;
	printf("Enter the value of temprature in celsius.\n");
	scanf("%f",&c);
	f=((c+32)*5)/9;
	printf("The value of temprature in celcius is %.2f",f);
}
