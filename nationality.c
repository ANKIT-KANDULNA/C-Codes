#include <stdio.h>
void namaste();
void konnichiwa();

int main()
{
    printf("Enter nationality:");
    char ch;
    scanf("%c",&ch);
    if(ch=='i')
    {
        namaste();
    }
    else
    {
        konnichiwa();
    }
    return 0;
}
void namaste()
{
    printf("NAMASTE!!");
}
void konnichiwa()
{
    printf("KONICHIWA!!");
}