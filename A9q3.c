#include"stdio.h"
int main()
{
int day;
printf("Enter days number ");
scanf("%d",&day);
switch(day)
{
    case 1:
    printf("This is Sunday \nthis is funday!");
    break;
    case 2:
    printf("This is monday \nGood morning");
    break;
    case 3:
    printf("This is tuesday \n Have a good day");
    break;
    case 4:
    printf("This is wednesday \n never regret");
    break;
    case 5:
    printf("This is thursday \n keep it up");
    break;
    case 6:
    printf("This is friday \n never give up");
    break;
    case 7:
    printf("This is saturday \n stay away from negative people");
    break;
    default:
    printf("Wrong day you have entered");
}
    return 0;
}