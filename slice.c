#include <stdio.h>
#include <string.h>
void slice(char str[],int n,int m);
int main()
{
    int n,m;
    printf("Enter string:");
    char str[100];
    fgets(str,100,stdin);
    printf("Enter starting:");
    scanf("%d",&n);
    printf("Enter ending:");
    scanf("%d",&m);
    slice(str,n,m);
    return 0;
}
void slice(char str[],int n,int m)
{
    char nstr[100];
    int j=0;
    for(int i=n;i<=m;j++,i++)
    {
        nstr[j]=str[i];
    }
    nstr[j]='\0';
    puts(nstr);  
}