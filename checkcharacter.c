#include <stdio.h>
#include <string.h>
void vowel(char str[]);
int main()
{
    printf("Enter string:");
    char str[100];
    fgets(str,100,stdin);
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        {
            printf("YES IT IS PRESENT");
            break;
        }
        else
        {
            printf("NOT PRESENT");
            break;
        }
    }
    return 0;
}