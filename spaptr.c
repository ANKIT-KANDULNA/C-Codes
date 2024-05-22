#include <stdio.h>
void spa(int x,int y,int *sum,int *prod,int *avg);
int main()
{
    int a,b,sum,prod,avg;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    spa(a,b,&sum,&prod,&avg);
    printf("sum=%d\nproduct=%d\naverage=%d\n",sum,prod,avg);
    return 0;
}
void spa(int x,int y,int *sum,int *prod,int *avg)
{
    *sum=x+y;
    *prod=x*y;
    *avg=(x+y)/2;
}