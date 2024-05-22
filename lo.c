#include <stdio.h>

int main()
{
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("AND VALUE IS:%d\n",a<10 && 1<b);
    printf("OR VALUE IS:%d\n",a==5 || b==5);
    printf("NOT VALUE IS:%d\n",!(a==b));
    return 0;
}