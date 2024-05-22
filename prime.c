#include <stdio.h>
int main()
{
    int a,i=2;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    for (int i=2;i<a;i++);
    {
        if (a%i==0)
        {
            printf("%d is a composite number",a);
        }
        else
        {
            printf("%d is a prime number",a);
        }
    }
    return 0;
}