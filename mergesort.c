#include <stdio.h>
void merge(int arr[],int s,int e){
    int mid=(e+s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int first[len1];
    int second[len2];
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    int k=mid+1; 
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }
}
void MergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);
    merge(arr,s,e);
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
    printf("Unsorted Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    MergeSort(arr,0,n-1);
    printf("Sorted Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}