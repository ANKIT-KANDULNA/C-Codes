#include <stdio.h>
int main()
{
    int r;
    printf("enter no. of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int k=1;k<=r-i;k++)
        {
            printf("  ");
        }
        int a=65;
        for(int j=1;j<=2*i-1;j++)
        {
            char ch=(char)a;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}