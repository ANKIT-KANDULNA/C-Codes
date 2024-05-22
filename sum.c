#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Nth term:");
    scanf("%d",&n);
    int i=1,sum=0;
    do
    {
        sum+=i;
        i++;
    } while (i<=n);
    printf("Sum of %d terms is:%d\n",n,sum);
    return 0;
}
