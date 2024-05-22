#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter full name:");
    char fn[100];
    fgets(fn,100,stdin);
    puts(fn);
    return 0;
}