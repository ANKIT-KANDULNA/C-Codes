#include <stdio.h>
int main()
{
    int n,rev=0,rem,org;
    printf("Enter number:");
    scanf("%d",&n);
    org=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==org)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("NOT a Palindrome number");
    }
    return 0;
}