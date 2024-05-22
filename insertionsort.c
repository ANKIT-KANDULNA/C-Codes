#include <stdio.h>
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the aray:");
    for(int j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    printf("Unsorted Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    InsertionSort(arr,n);
    printf("Sorted Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}