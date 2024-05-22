#include <stdio.h>
int main()
{
    char ch;
    printf("Enter something: ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9') 
    {
        printf("%c is a DIGIT", ch);
    } 
    else 
    {
        printf("%c is NOT a DIGIT", ch);
    }
    return 0;
}