#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a 5 digit number:");
    scanf("%d",&n);
    if (n<10000 || n>99999)
    {
        printf("Invalid Input");
    }
    else
    {
        while(n>0)
        {
            int digit=n%10;
            sum+=digit;
            n/=10;
        }
        printf("Sum of digits:%d",sum);
    }
    return 0;
}