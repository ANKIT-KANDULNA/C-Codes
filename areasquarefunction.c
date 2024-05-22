#include <stdio.h>
#include <math.h>
int areasquare(int n);
int main()
{
    int x;
    printf("Enter side:");
    scanf("%d",&x);
    areasquare(x);
    return 0;
}
int areasquare(int x)
{
    printf("Area of Square is:%f",pow(x,2));
    return 0;
}