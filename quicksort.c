#include <stdio.h>
int partition(int arr[],int lower,int upper){
    int p=arr[lower];
    int m=lower;
    while(lower<upper){
        while(arr[lower]<=p){
            lower++;
        }
        while(arr[upper]>p){
            upper--;
        }
        if(lower<upper){
            int temp=arr[lower];
            arr[lower]=arr[upper];
            arr[upper]=temp;
            lower++;
            upper--;
        }
    }
    arr[m]=arr[upper];
    arr[upper]=p;
    return upper;
}
void quicksort(int arr[],int lower,int upper){
    if(lower<upper){
        int l=partition(arr,lower,upper);
        quicksort(arr,lower,l-1);
        quicksort(arr,l+1,upper);
    }
    return ;
}
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array after  the sorting \n");
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
