#include <stdio.h>
int main()
{
    int r;
    printf("enter no. of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            printf("  ");
        }
        int a=65;
        for(int m=1;m<=i;m++)
        {
            char ch=(char)a;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}