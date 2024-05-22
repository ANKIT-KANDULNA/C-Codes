#include <stdio.h>
void table(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    table(n);
    return 0;
}
void table(int x)
{
    for (int i = 1; i <=10; i++)
    {
        printf("%d\n",x*i);
    }
}