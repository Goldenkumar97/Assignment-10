#include"stdio.h"
#include"stdlib.h"
int main()
{
 int ch,a,b,c;
 while(1)
     {
    printf("\nEnter your choice : \n");
    printf("1. To check isosceles tringle \n");
    printf("2.To check right angled \n");
    printf("3. To check equilateral tringle \n");
    printf("4. Exit\n");
    scanf("%d",&ch);
    printf("Enter three sides of tringle :\n");
    scanf("%d%d%d",&a,&b,&c);
    switch(ch)
    {
        case 1:
        if(a==b || b==c || c==a)
        printf("isosceles tringle");
        else
        printf("not isosceles tringle");
        break;
        case 2:
        if(a*a==b*b + c*c || b*b==a*a+c*c || c*c==b*b + c*c)
        printf("right angle tringle");
        else
        printf("not right angled tringle");
        break;
        case 3:
        if(a==b && b==c)
        printf("equilateral tringle");
        else
        printf("not equilateral tringle");
        break;
        case 4:
        exit(0);
    }
    }
    return 0;
}