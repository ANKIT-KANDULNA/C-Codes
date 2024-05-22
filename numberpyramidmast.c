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
        for(int m=1;m<=i;m++)
        {
            printf("%d ",m);
        }
        int a=i-1;
        for(int k=1;k<=i-1;k++)
        {
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}