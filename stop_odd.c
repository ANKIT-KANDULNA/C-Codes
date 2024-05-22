//this program only takes even inputs and stops when user enters an odd number
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter number:");
        scanf("%d",&n);
        if (n%2!=0)
        {
            break;
        }
    } while (1);
    return 0;
}