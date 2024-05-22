#include <stdio.h>

int main()
{
    int d,rem,b=0,i=1;
    printf("Enter DECIMAL number:");
    scanf("%d",&d);
    printf("BINARY number:");
    while(d!=0)
    {
        rem=d%2;
        b=b+i*rem;
        d/=2;
        i*=10;
    }
    printf("%d",b);
    return 0;
}