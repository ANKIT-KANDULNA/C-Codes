#include <stdio.h>
int arearectangle(int a,int b);
int main()
{
    int l,b;
    printf("enter ths length:");
    scanf("%d",&l);
    printf("enter the breadth:");
    scanf("%d",&b);
    arearectangle(l,b);
    return 0;
}
int arearectangle(int x,int y)
{
    printf("Area of rectangle is:%d",x*y);
}