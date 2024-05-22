#include <stdio.h>
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search:");
    int key;
    scanf("%d",&key);
    int result=linearsearch(arr,n,key);
    if(result!=-1){
        printf("%d present at index: %d",key,result);
    } 
    else{
        printf("%d not found in the array.",key);
    }
    return 0;
}