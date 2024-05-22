#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    printf("AND VALUE IS:%d\n",num1 & num2);
    printf("OR VALUE IS:%d\n",num1 | num2);
    printf("XOR VALUE IS:%d\n",num1^num2);
    printf("NOT VALUE OF FIRST NUMBER IS:%d\n",~num1);
    printf("NOT VALUE OF SECOND NUMBER IS:%d\n",~num2);
    printf("RIGHT SHIFT VALUE OF FIRST NUMBER IS %d\n",num1>>1);
    printf("RIGHT SHIFT VALUE OF SECOND NUMBER IS:%d\n",num2>>1);
    printf("LEFT SHIFT VALUE OF FIRST NUMBER IS:%d\n",num1<<1);
    printf("LEFT SHIFT VALUE OF SECOND NUMBER IS:%d\n",num2<<1);
    return 0;
}