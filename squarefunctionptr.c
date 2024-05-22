#include <stdio.h>
#include <math.h>
void square(int n);
void _square(int *n);
int main()
{
    int x;
    printf("Enter number:");
    scanf("%d\n",&x);
    square(x);
    printf("%d\n",x);

    _square(&x);
    printf("%d\n",x);
    return 0;
}
void square(int x)
{
    printf("Square of number is:%f\n",pow(x,2));
}
void _square(int *x)
{
    *x=(*x)*(*x);
    printf("Square of number is:%d\n",*x);
}