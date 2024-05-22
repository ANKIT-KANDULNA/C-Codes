#include <stdio.h>
int main() 
{
    int s,f,c=0;
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
    printf("\nEnter the number you want to find:");
    scanf("%d",&f);
    for(int k=0;k<s;k++)
    {
        if(a[k]==f)
        {
            c++;
        }
    }
    printf("%d occured %d times in the ARRAY",f,c);
    return 0;
}