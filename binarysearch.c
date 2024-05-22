#include <stdio.h>
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=((end-start)/2)+start;
    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            mid=start+1;
        }
        mid=((end-start)/2)+start;
    }
}
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search:");
    int key;
    scanf("%d",&key);
    int result=binarysearch(arr,n,key);
    if(result!=-1){
        printf("%d present at index: %d",key,result);
    } 
    else{
        printf("%d not found in the array.",key);
    }
    return 0;
}