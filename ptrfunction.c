#include <stdio.h>
int *max(int*,int*);
int main()
{
    int a=0;
    int b=0;
    int *c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    c=max(&a,&b);
    printf("Maximum number is:%d\n",*c);
    return 0;
}
int *max(int *n1,int *n2)
{
    if(*n1>*n2)
    {
        return n1;
    }
    return n2;
}