#include <stdio.h>
int main()
{
    char alphabet[26];
    char *ptr=alphabet;
    for(char x='A';x<='Z';x++)
    {
        *ptr=x;
        *ptr++;
    }
    ptr=alphabet;
    while(*ptr!='[')
    {
        printf("%c ",*ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}