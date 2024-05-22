#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter number:");
        scanf("%d",&n);
        if (n%7==0)
        {
            break;
        }
    } while (1);
    return 0;
}