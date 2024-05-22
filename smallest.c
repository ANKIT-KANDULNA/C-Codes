#include <stdio.h>
float main()
{
    float a,b;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    if (a<b)
    {
        printf("%f is smaller than %f",a,b);
    }
    else
    {
        printf("%f is smaller than %f",b,a);
    }
    return 0;
}