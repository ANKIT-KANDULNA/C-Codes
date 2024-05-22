#include <stdio.h>
float temperature(float celsius);
int main()
{
    int x;
    printf("Enter the temperature(C):");
    scanf("%d",&x);
    printf("Temperature(F) is:%f",temperature(x));
    return 0;
}
float temperature(float c)
{
    float f=(c*9/5)+32;
    return f;
}