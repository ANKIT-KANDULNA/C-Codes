#include <stdio.h>
#include <math.h>
int square(int n);
int main()
{
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    square(x);
    return 0;
}
int square(int x)
{
    printf("Square of number is:%f",pow(x,2));
    return 0;
}