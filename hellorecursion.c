#include <stdio.h>

void printHR(int count);

int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printHR(n);
    return 0;
}

void printHR(int count)
{
    if(count==0)
    {
        return;
    }
    printf("HELLO EVERYNYAN!!\n");
    printHR(count-1);
}