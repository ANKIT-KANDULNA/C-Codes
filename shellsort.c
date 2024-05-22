#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int gap;
    printf("Enter the gap:");
    scanf("%d",&gap);
    while(gap>0){
        for(int i=0;i+gap<n;i++){
            if(arr[i]>arr[i+gap]){
                int temp=arr[i];
                arr[i]=arr[i+gap];
                arr[i+gap]=temp;
            }
        }
        gap--;
    }
    printf("Sorted Array:");
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}