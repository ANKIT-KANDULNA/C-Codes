#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int k;
    scanf("%d",&k);
    int arr[k];
    for(int i=0;i<k;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<k;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<k;i++){
        arr[i]=arr[i]-max+1;
    }
    for(int i=0;i<max;i++){
        for(int j=0;j<k;j++){
            if(arr[j]<=0){
                printf("  ");
                arr[j]=arr[j]+1;
            }
            else{
                printf("%d ",arr[j]);
                arr[j]=arr[j]+1;
            }
        }
        printf("\n");
    }
    return 0;
}