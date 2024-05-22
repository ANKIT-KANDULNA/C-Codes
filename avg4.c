#include <stdio.h>
float main()
{
    float a,b,c,d;
    printf("enter the first number:");
    scanf("%f",&a);
    printf("enter the second number:");
    scanf("%f",&b);
    printf("enter the third number:");
    scanf("%f",&c);
    printf("enter the fourth number:");
    scanf("%f",&d);
    printf("the average of these numbers are:%f",(a+b+c+d)/4);
    return 0;
}