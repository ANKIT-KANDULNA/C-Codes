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
        for(int k=1;k<=2*i-1;k++) 
        {
            if(k==1 || k==2*i-1)
            {
                printf("* ");
            } 
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=r-1;i>=1;i--) 
    {
        for(int j=1;j<=r-i;j++) 
        {
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++) 
        {
            if(k==1 || k==2*i-1) 
            {
                printf("* ");
            } 
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}