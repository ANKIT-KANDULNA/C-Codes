#include <stdio.h>
void insertx(int arr[],int s,int a){
    arr[s]=arr[s];
    arr[s]=a;
    printf("%d inserted in the array.",a);
}
int searchx(int arr[],int b,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==b){
            return i;
        }
    }
    return -1;
}
void deletex(int arr[],int y,int n){
    int q=searchx(arr,y,n);
    for(int j=q;j<n-1;j++){
        arr[j]=arr[j+1];
    }  
}
void updatex(int arr[],int c,int z,int n){
    int t=searchx(arr,c,n);
    arr[t]=z;
    printf("Number %d updated to %d.\n",c,z);
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n,N,a,x,y,z,b,c;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("1.Insert\n2.Delete\n3.Search\n4.Update\n5.Display\n6.Exit\n");
    printf("Enter a number(1-6):");
    scanf("%d",&N);
    while(N>=1 && N<=6){
        if(N==1){
            printf("Enter the element to be inserted:");
            scanf("%d",a);
            insertx(arr,a,n);
            n++;
        }
        else if(N==2){
            printf("Enter the element to be deleted:");
            scanf("%d",&y);
            deletex(arr,y,n);
        }
        else if(N==3){
            printf("Enter the element to be searched:");
            scanf("%d",&b);
            searchx(arr,b,n);
        }
        else if(N==4){
            printf("Enter the element to be updated:");
            scanf("%d",&c);
            printf("Enter the new element:");
            scanf("%d",&z);
            updatex(arr,c,z,n);
        }
        else if(N==5){
            display(arr,n);
        }
        else if(N==6){
            break;
        }
        else{
            printf("Invalid Choice.");
        }
        printf("\nEnter a number(1-6):");
        scanf("%d", &N);
    }
    return 0;
}