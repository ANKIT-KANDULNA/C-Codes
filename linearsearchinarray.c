#include <stdio.h>
int main()
{
    int r,c,x,co=0,a[5][5];
    printf("Enter no. of rows:");
    scanf("%d",&r);
    printf("Enter no. of columns:");
    scanf("%d",&c);
    printf("Enter elements:\n");
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter what to find:");
    scanf("%d",&x);
    for(int k=1;k<=r;k++)
    {
        for(int l=1;l<=c;l++)
        {
            if(a[k][l]==x)
            {
                printf("%d found at [%d,%d]",x,k,l);
                co++;
            }
        }
    }
    if(co==0)
    {
        printf("%d not found",x);
    }
    return 0;
}