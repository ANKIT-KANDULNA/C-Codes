#include <stdio.h>
void max(int *a,int *b);
int main()
{
    int x,y;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    max(&x,&y);
    return 0;
}
void max(int *a,int *b)
{
    if(*a>*b)
    {
        printf("%d is greatest",*a);
    }
    else
    {
        printf("%d is greatest",*b);
    }
}