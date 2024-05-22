#include <stdio.h>
int main()
{
    float price[3];
    printf("Enter 3 prices:");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    printf("Total Cost:%f",(price[0]+price[1]+price[2])+0.18*(price[0]+price[1]+price[2]));
    return 0;
}