//Write a programme to find the middle value among three numbers.
/*Normally, you cannot write conditions like (a > b && a < c) directly in a case, because cases must be constants.
But conditions evaluate to 0 (false) or 1 (true).
If you write switch(1), then only those case labels that evaluate to 1 will match.*/
//#include<stdio.h>
//void main()
//{
//	int a,b,c;
//	printf("Enter three numbers.\n");
//	scanf("%d%d%d",&a,&b,&c);
//	//Switch case
//	switch(1)
//	{
//		case((a>b && a<c) || (a>c && a<b)):
//			printf("%d is middle number",a);
//			break;
//		case((b>a && b<c) || (b>c && b<a)):
//			printf("%d is middle number",b);
//			break;
//		case((c>a && c<b) || (c>b && c>a)):
//			printf("%d is middle number",c);
//			break;
//		case(a==b && b==c):
//			printf("All numbers are equal.");
//		default:
//			printf("Numbers are invalid");
//	}
//}This code give error, case label does not reduce an integer constant

/*#include <stdio.h>
void main() {
    int a, b, c, middle;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Decide which number is middle
    if((a > b && a < c) || (a > c && a < b))
        middle = 1;   // a is middle
    else if((b > a && b < c) || (b > c && b < a))
        middle = 2;   // b is middle
    else if((c > a && c < b) || (c > b && c < a))
        middle = 3;   // c is middle
    else
        middle = 0;   // all equal or invalid

    // Switch on the result
    switch(middle) {
        case 1:
            printf("%d is middle number\n", a);
            break;
        case 2:
            printf("%d is middle number\n", b);
            break;
        case 3:
            printf("%d is middle number\n", c);
            break;
        case 0:
            printf("All numbers are equal or invalid\n");
            break;
    }
}
*/

#include <stdio.h>
void main() {
    int a,b,c,middle;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    // Check if a is middle
    switch((a > b && a < c) || (a > c && a < b)) {
    case 1:
        printf("a is middle\n");
        break;
    }

    // Check if b is middle
    switch((b > a && b < c) || (b > c && b < a)) {
    case 1:
        printf("b is middle\n");
        break;
    }

    // Check if c is middle
    switch((c > a && c < b) || (c > b && c < a)) {
    case 1:
        printf("c is middle\n");
        break;
    }
}

