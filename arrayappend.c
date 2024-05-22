#include <stdio.h>
int main() 
{
    int s;
    printf("Enter size of array:");
    scanf("%d",&s);
    int a[s];
    printf("Enter elements:\n");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);      
    }
    printf("ARRAY:");
    for(int j=0;j<s;j++)
    {
        printf("%d ",a[j]);
    }
    a[s+1];
    printf("\nEnter new element:");
    scanf("%d",&a[s]);
    printf("NEW ARRAY:");
    for(int k=0;k<s+1;k++)
    {
        printf("%d ",a[k]);
    }
    return 0;
}