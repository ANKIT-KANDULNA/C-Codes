#include <stdio.h>
int main()
{
    int n,c=0;
    printf("Enter no. of characters:");
    scanf("%d",&n);
    getchar();
    printf("Enter string:");
    char str[n];
    fgets(str,n,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            c++;
        }
    }
    printf("No. of vowels in the string are:%d",c);
    return 0;
}