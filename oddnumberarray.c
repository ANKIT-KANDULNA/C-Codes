#include <stdio.h>
int countodd(int arr[],int n);
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements:");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ARRAY:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThere are %d odd numbers in ARRAY",countodd(arr,n));
    return 0;
}
int countodd(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            c++;
        }
    }
    return c;
}