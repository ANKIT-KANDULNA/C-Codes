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
        for(int j=1;j<=i;j++)
        {
            char ch=(char)(j+64);
            printf("%c ",ch);
        }
        int b=i-1;
        for(int l=1;l<=i-1;l++)
        {
            char ch1=(char)(b+64);
            printf("%c ",ch1);
            b--;
        }
        printf("\n");
    }
    return 0;
}