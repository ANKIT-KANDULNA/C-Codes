#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n>=1)
    {
        printf("Natural Number");
    }
    else
    {
        printf("Not a natural number");
    }
    return 0;
}