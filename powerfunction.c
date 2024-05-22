#include <stdio.h>
int power(int a,int b);
int main()
{
    int a,b;
    printf("Enter base:");
    scanf("%d",&a);
    printf("Enter power:");
    scanf("%d",&b);
    printf("%d to the power %d is:%d",a,b,power(a,b));
    return 0;
}
int power(int x,int y)
{
    int n=1;
    for(int i=1;i<=y;i++)
    {
        n*=x;
    }
    return n;
}