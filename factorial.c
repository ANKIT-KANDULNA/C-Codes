#include <stdio.h>
int main()
{
    int n,f=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("0! = 1");
    }
    else if(n>=1)
    {
        for(int i=1;i<=n;i++)
        {
            f*=i;
        }
        printf("%d! = %d\n",n,f);
    }
    else
    {
        printf("Wrong Input!!");
    }
    return 0;
}