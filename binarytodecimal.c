#include <stdio.h>
#include <math.h>
int main()
{
    int n,org,sum=0,p=0,rem;
    org=n;
    printf("Enter BINARY number:");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        sum+=rem*pow(2,p);
        n/=10;
        p++;
    }
    printf("DECIMAL number is:%d",sum);
    return 0;
}