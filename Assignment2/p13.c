//Write a programme to calculate the grade of a student based on marks
#include<stdio.h>
void main()
{
	int eng,hin,sci,mat,soc,total,per;
	printf("Enter English marks\n");
	scanf("%d",&eng);
	printf("Enter Hindi marks\n");
	scanf("%d",&hin);
	printf("Enter Mathematics marks\n");
	scanf("%d",&mat);
	printf("Enter Science marks\n");
	scanf("%d",&sci);
	printf("Enter Social Science marks\n");
	scanf("%d",&soc);
	total=eng+hin+mat+sci+soc;
	printf("Total marks = %d\n",total);
	per=total/5;
	printf("Percentage = %d\n",per);
	//Grade of a student
	if(per<=100 && per>=90)
	    printf("Grade = A+");
	else if(per<90 && per>=80)
	    printf("Grade = A");
	else if(per<80 && per>=70)
	    printf("Grade = B+");
	else if(per<70 && per>=60)
	    printf("Grade = B");
	else if(per<60 && per>=50)
	    printf("Grade = C+");
	else if(per<50 && per>=45)
	    printf("Grade = C");
	else if(per<45 && per>=0)
	    printf("Grade = D");
}
