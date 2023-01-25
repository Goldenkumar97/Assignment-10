#include"stdio.h"
int main()
{
    int x;
    printf("Enter number ");
    scanf("%d",&x);
    switch(x>0)
    {
        case 0:
        printf("negative number to positive number =%d",-x*1);
        break;
        case 1:
        printf("positive to negative number =%d ",-x);
    }
    return 0;
}