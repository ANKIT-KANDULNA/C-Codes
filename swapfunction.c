#include <stdio.h>
void swap(int a,int b);
int main()
{
    int a,b,t;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
    int t=x;
    x=y;
    y=t;
    printf("first number:%d\n",x);
    printf("second number:%d",y);
}