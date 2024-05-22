#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    for(int i=0;i<n;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}