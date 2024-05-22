#include <stdio.h>
int sum(int arr[],int n)
{
    static int i=0;
    if(i==n)
    {
    return 0;
    }
    return arr[i++]+sum(arr,n);
}
int main() 
{
    int n;
    printf("enter the length of array:");
    scanf("%d", &n);
    int arr[n];
    printf("ARRAY ELEMENTS:");
    for(int i=0;i<n;i++) 
    { 
        scanf("%d",&arr[i]);
    }
    printf("Sum is:%d", sum(arr,n)); 
    return 0;
}