//Write a programme to calculate the sum of first and last digit of given four digit number.
#include<stdio.h>
void main()
{
   int num,first,last,sum;
   printf("Enter a four digit number.\n");
   scanf("%d",&num);
   first=num%10;
   last=num/1000;
   sum=first+last;
   printf("The sum of first and last digit of given four digit number = %d",sum);	
} 
