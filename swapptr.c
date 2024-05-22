#include <stdio.h>
int main()
{
    int a,b;
    int *x=&a,*y=&b;
    printf("Enter first number:");
    scanf("%d",x);
    printf("Enter second number:");
    scanf("%d",y);
    int t=*x;
    *x=*y;
    *y=t;
    printf("First number:%d\n",*x);
    printf("Second number:%d",*y);
    return 0;
}