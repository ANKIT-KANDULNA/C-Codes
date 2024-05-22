#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter no. of characters:");
    scanf("%d",&n);
    char org[n],rev[n];
    getchar();
    printf("Enter string:");
    char str[n+1];
    fgets(str,n+1,stdin);
    int c=strlen(str);
    int j=c-1;
    for(int i=0;i<c;i++)
    {
        org[i]=str[i];
        rev[j]=str[i];
        j--;
    }
    for(int k=0;k<c;k++)
    {
        if(org[k]==rev[k])
        {
            printf("Palindrome string");
            break;
        }
        else
        {
            printf("Not a Palindrome string");
            break;
        }
    }    
    return 0;
}