#include <stdio.h>
int main()
{
    int i=5,sum=0;
    do
    {
        sum+=i;
        i++;
    } while (i<=50);
    printf("Sum of 5 to 50 is:%d\n",sum);
    return 0;
}