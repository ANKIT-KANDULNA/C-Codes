#include <stdio.h>
int factorial(int x);
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Factorial of the %d is:%d",x,factorial(x));
    return 0;
}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int f=factorial(n-1)*n;
    return f;
}