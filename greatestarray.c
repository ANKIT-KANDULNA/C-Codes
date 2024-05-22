#include <stdio.h>
int main() 
{
    int s,g=0;
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
    for(int k=0;k<s;k++)
    {
        if(g<a[k])
        {
            g=a[k];
        }
    }
    printf("\nGreatest number is:%d",g);
    return 0;
}