//Write a program to check whether a number lies between 100 and 200
#include<stdio.h>
void main()
{
   int num;
   printf("Enter a number\n");
   scanf("%d",&num);
   //Check number lie betweeb 100 and 200
   if(num>100 && num<200)
       printf("%d Number lies between 100 and 200",num);
    else
       printf("%d Number does not lie between 100 and 200",num);
}	 
