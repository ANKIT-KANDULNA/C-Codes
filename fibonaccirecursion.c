#include <stdio.h>
int fibonacci(int n);
int main()
{
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    printf("Fibonacci of %d is:%d",x,fibonacci(x));
    return 0;
}
int fibonacci(int x)
{
    if(x==1 || x==0)
    {
        if(x==0)
        { 
            return 0;
        }
        else if(x==1)
        {
            return 1;
        }
    }
    int f=fibonacci(x-1)+fibonacci(x-2);
    return f;
}