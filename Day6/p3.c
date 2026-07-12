//Calculator using switch case(menu driven programming)
#include<stdio.h>
void main()
{
   char choice;
   float a,b;	
   printf("----------------------\n");
   printf("Enter + symbol to add numbers\n");
   printf("Enter - symbol to subtract numbers\n");
   printf("Enter * symbol to multiply numbers\n");
   printf("Enter / symbol to add numbers\n");
   printf("----------------------\n");
   printf("Enter your choice\n");
   scanf("%c",&choice);
   //SWitch case
   switch(choice)
   {
   	    case '+':
   	   	    printf("Enter the value of a and b");
   	   	    scanf("%f%f",&a,&b);
   	   	    printf("Sum = %f\n",a+b);
   	   	    break;
   	    case '-':
   	   	    printf("Enter the value of a and b");
   	   	    scanf("%f%f",&a,&b);
   	   	    printf("Sub = %f\n",a-b);
   	   	    break;
   	    case '*':
   	   	    printf("Enter the value of a and b");
   	   	    scanf("%f%f",&a,&b);
   	   	    printf("Mul = %f\n",a*b);
   	   	    break;
   	   	case '/':
   	   	    printf("Enter the value of a and b");
   	   	    scanf("%f%f",&a,&b);
   	   	    printf("Div = %f\n",a/b);
   	   	    break;
   	   	default:
   	   		printf("Invalid choice");
   }
}
