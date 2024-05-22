#include <stdio.h>
#include <string.h>
void ps(char arr[]);
int main()
{
    printf("Enter first name:");
    char fn[20];
    scanf("%s",fn);
    printf("Enter last name:");
    char ln[20];
    scanf("%s",ln);
    ps(fn);
    ps(ln);
    return 0;
}
void ps(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}