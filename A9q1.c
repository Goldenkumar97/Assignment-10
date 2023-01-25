/*WAP which takes the month number as an and display number of days in that month */
#include"stdio.h"
int main()
{
    int num;
    printf("Enter month number ");
    scanf("%d",&num);
    switch (num)
    {
        case 1:
        printf("%d", 31);
        printf("january");
        break;
        case 2:
        printf("%d",28);
        printf("Febuary");
        break;
        case 3:
        printf("%d",31);
        printf("March");
        break;
        case 4:
        printf("%d",30);
        printf("April");
        break;
        case 5:
        printf("%d",31);
        printf("May");
        break;
        case 6:
        printf("%d",30);
        printf("June");
        break;
        case 7:
        printf("%d",31);
        printf("July");
        break;
        case 8:
        printf("%d",31);
        printf("August");
        break;
        case 9:
        printf("%d",30);
        printf("Septemeber");
        break;
        case 10:
        printf("%d",31);
        printf("October");
        case 11:
        printf("%d",30);
        printf("November");
        break;
        case 12:
        printf("%d",31);
        printf("December");
        break;
        default:
        printf("invalid months you have entered");
    }
    
    return 0;
}
