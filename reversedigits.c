#include <stdio.h>
int main()
{
    int n,reverse=0;
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
            reverse=reverse*10+digit;
            n/=10;
        }
        printf("Reverse of digits is:%d",reverse);
    }
    return 0;
}