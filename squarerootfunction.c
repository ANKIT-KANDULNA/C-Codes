#include <stdio.h>
#include <math.h>
float squareroot(float x);
int main()
{
    float a;
    printf("Enter the number:");
    scanf("%f",&a);
    printf("Square root of %f is:%f",a,squareroot(a));
    return 0;
}
float squareroot(float x)
{
    return pow(x,0.5);
}