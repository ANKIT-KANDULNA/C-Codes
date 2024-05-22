#include <stdio.h>
int main()
{
    int r,c,a[10][10];
    printf("Enter no. of rows:");
    scanf("%d",&r);
    printf("Enter no. of columns:");
    scanf("%d",&c);
    printf("Enter elements:");
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    return 0;
}