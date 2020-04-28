#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("please enter the first number \n");
    scanf("%d",&x);
    printf("please enter the second number \n");
    scanf("%d",&y);
    if (x==y)
    {
        printf("equail\n ");
    }
    else
    {
        printf("not equail\n");
    }

    if (x>=y)
    {
        printf("the higher number is %d",x);
    }
    else
    {
        printf("the higher number is %d",y);
    }
    return 0;
}
