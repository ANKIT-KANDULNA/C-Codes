#include <stdio.h>
#define MAX_SIZE 100
void display_menu() {
    printf("\nMenu:\n");
    printf("1.Add number\n");
    printf("2.Delete number\n");
    printf("3.Search number\n");
    printf("4.Update number\n");
    printf("5.Display numbers\n");
    printf("6.Exit\n");
}
void insertx(int arr[], int *size, int num) {
    if(*size <MAX_SIZE){
        arr[*size]=num;
        (*size)++;
        printf("Number %d inserted in the list\n",num);
    } 
    else{
        printf("The list is full\n");
    }
}
void deletex(int arr[],int *size,int num){
    int i, found = 0;
    for(i=0;i<*size;i++){
        if(arr[i]==num){
            found=1;
            for(int j=i;j<*size-1;j++){
                arr[j]=arr[j+1];
            }
            (*size)--;
            printf("Number %d deleted from the list\n", num);
            break;
        }
    }
    if(!found){
        printf("Number %d is not in the list\n",num);
    }
}
void searchx(int arr[],int size,int num){
    int i,f=0;
    for(i=0;i<size;i++){
        if(arr[i]==num){
            f=1;
            printf("Number %d found in the list at index %d\n",num,i);
            break;
        }
    }
    if(!f){
        printf("Number %d not found in the list\n",num);
    }
}
void updatex(int arr[],int size,int old,int new) {
    int i,f=0;
    for(i=0;i<size;i++){
        if(arr[i]==old) {
            f=1;
            arr[i]=new;
            printf("Number %d updated to %d\n",old,new);
            break;
        }
    }
    if(!f){
        printf("Number %d is not in the list\n",old);
    }
}
void display(int arr[],int size){
    if(size==0){
        printf("The list is empty\n");
    } 
    else{
        printf("Numbers in the list:\n");
        for (int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
int main(){
    int numbers[MAX_SIZE];
    int size=0;
    int choice,num,old,new;
    while(1){
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter number to add: ");
                scanf("%d", &num);
                insertx(numbers,&size,num);
                break;
            case 2:
                printf("Enter number to delete: ");
                scanf("%d",&num);
                deletex(numbers,&size,num);
                break;
            case 3:
                printf("Enter number to search: ");
                scanf("%d",&num);
                searchx(numbers,size,num);
                break;
            case 4:
                printf("Enter number to update: ");
                scanf("%d", &old);
                printf("Enter the new number: ");
                scanf("%d", &new);
                updatex(numbers,size,old,new);
                break;
            case 5:
                display(numbers,size);
                break;
            case 6:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    return 0;
}