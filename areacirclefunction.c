#include <stdio.h>
int areacircle(int a);
int main()
{
    int z;
    printf("Enter the radius:");
    scanf("%d",&z);
    areacircle(z);
    return 0;
}
int areacircle(int b)
{
    printf("Area of the Circle is:%f",3.14*b*b);
    return 0;
}