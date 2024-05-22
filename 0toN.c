#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number:");
    scanf("%d",&N);

    int i=0;
    while(i<=N)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}