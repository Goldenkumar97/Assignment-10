/* Write a menu driven program with the followings options .
a. Addition 
b. Subractions 
c. Multipication
d. Division
e. Exit*/
#include"stdio.h"
#include"stdlib.h"
int main()
{
    int a,b,c,ch;
    printf("n1.Addition \n");
    printf("n2.Subractions\n");
    printf("n3.Multipication\n");
    printf("n4.Division\n");
    printf("n5.Exit\n");
    printf("Enter your choice ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter two numbers ");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("Addition of %d",c);
        break;
        case 2:
        printf("Enter two numbers ");
        scanf("%d%d",&a,&b);
        c=b-a;
        printf("subtraction of %d",c);
        break;
        case 3:
         printf("Enter two numbers ");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("Multipication of %d",c);
        break;
        case 4:
        printf("Enter two numbers ");
        scanf("%d%d",&a,&b);
        c=b/a;
        printf("Division of %d",c);
        break;
        case 5:
        default:
        printf("Wrong number you have entered");
        exit(0);
    }
return 0;
}