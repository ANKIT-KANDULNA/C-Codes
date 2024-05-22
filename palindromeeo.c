#include <stdio.h>
int main()
{
    int n,rev=0,rem,org,c=0;
    printf("Enter number:");
    scanf("%d",&n);
    org=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
        c++;
    }
    if(rev==org)
    {
        printf("Palindrome Number\n");
        if(c%2==0)
        {
            printf("Even palindrome");
        }
        else
        {
            printf("Odd Palindrome");
        }
    }
    else
    {
        printf("NOT a Palindrome number");
    }
    return 0;
}