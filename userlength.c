#include <stdio.h>
#include <string.h>
int main()
{
    int l=0;
    printf("Enter full name:");
    char fn[100];
    fgets(fn,100,stdin);
    puts(fn);
    for(int i=1;fn[i]!='\0';i++)
    {
        l++;
    }
    printf("Length of your name is:%d",l);
    return 0;
}