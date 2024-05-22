#include <stdio.h>
int hotorcold(int x);
int main()
{
    int x;
    printf("Enter the temperature(C):");
    scanf("%d",&x);
    hotorcold(x);
    return 0;
}
int hotorcold(int a)
{
    if(a<=10)
    {
        printf("COLD weather");
    }
    else
    {
        printf("HOT weather");
    }
    return 0;
}