#include"stdio.h"
int main()
{
    int num,a;
    printf("Enter a number ");
    scanf("%d",&num);
    a=num%2;
    switch(a)
    {
        case 0:
        printf(" next odd number %d ",num+1);
        break;
        case 1:
        printf("odd number %d ",num);
    }
    return 0;
}