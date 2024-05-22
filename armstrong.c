#include <stdio.h>
int main()
{
    int x,n,a,b,c,X;
    printf("Enter the number:");
    scanf("%d",&x);
    n=x;
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;
    c=x%10;
    x=x/10;
    X=(a*a*a)+(b*b*b)+(c*c*c);
    if (n==X)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
    return 0;
}