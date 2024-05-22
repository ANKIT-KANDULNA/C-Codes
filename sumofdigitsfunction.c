#include <stdio.h>
int sumofdigits(int n);
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Sum of digits is:%d",sumofdigits(x));
    return 0;
}
int sumofdigits(int x)
{
    int sum=0;
    while(x>0)
        {
            int digit=x%10;
            sum+=digit;
            x/=10;
        }
    return sum;
}