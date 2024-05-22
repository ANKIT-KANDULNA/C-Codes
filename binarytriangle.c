#include <stdio.h>
int main()
{
    int r,a;
    printf("enter no. of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        if(i%2==0)
        {
            a=0;
        }
        else
        {
            a=1;
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            if(a==0)
            {
                a=1;
            }
            else
            {
                a=0;
            }
        }
        printf("\n");
    }
    return 0;
}