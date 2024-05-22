#include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int table[10];
    for(int i=1;i<=10;i++)
    {
        table[i-1]=n*i;
    }
    printf("Table of %d is:\n",n);
    for(int i=0;i<10;i++)
    {
        printf("%d\n",table[i]);
    }
    return 0;
}