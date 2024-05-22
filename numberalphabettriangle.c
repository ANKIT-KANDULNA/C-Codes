#include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=65;
        if(i%2==0)
        {
            for(int j=1;j<=i;j++)
            {
                char ch=(char)a;
                printf("%c ",ch);
                a++;
            }
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}