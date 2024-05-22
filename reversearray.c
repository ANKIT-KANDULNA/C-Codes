#include <stdio.h>
int main() 
{
    int s;
    printf("Enter size of array:");
    scanf("%d",&s);
    int a[s];
    printf("Enter elements:");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);      
    }
    printf("ORIGINAL ARRAY:");
    for(int j=0;j<s;j++)
    {
        printf("%d ",a[j]);
    }

    printf("\nREVERSE ARRAY:");
    for(int k=s-1;k>=0;k--) 
    {
        printf("%d ",a[k]);
    }
    return 0;
}