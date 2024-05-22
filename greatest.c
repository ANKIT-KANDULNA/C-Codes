#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    printf("Enter fourth number:");
    scanf("%d",&d);
    printf("Enter fifth number:");
    scanf("%d",&e);
    int max=a;
    if (b>max)
    {
        max=b;
    }
    else if (c>max)
    {
        max=c;
    }
    else if (d>max)
    {
        max=d;
    }
    else if (e>max)
    {
        max=e;
    }
    printf("%d is greatest",max);
    return 0;
}