#include <stdio.h>
int sum(int n);
int main()
{
    int x;
    printf("Enter Nth term:");
    scanf("%d",&x);
    printf("Sum upto %d terms is:%d",x,sum(x));
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int s1=sum(n-1);
    int s=s1+n;
    return s;
}