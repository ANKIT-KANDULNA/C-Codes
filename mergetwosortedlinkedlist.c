#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *mergeTwoLists(struct Node *list1,struct Node *list2) {
    struct Node *temp=NULL;
    struct Node *new_node=NULL;
    if(list1==NULL){
        return list2;
    }
    else if(list2==NULL){
        return list1;
    }
    else if(list1->data<=list2->data){
            new_node=list1;
            list1=list1->next;
    }
    else{
        new_node=list2;
        list2=list2->next;
    }
    temp=new_node;
    while(list1!=NULL && list2!=NULL){
        if(list1->data<=list2->data){
            temp->next=list1;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            list2=list2->next;
        }
        temp=temp->next;
    }
    if(list1!=NULL){
        temp->next=list1;
    }
    if(list2!=NULL){
        temp->next=list2;
    }
    return new_node;
}
void printList(struct Node *head){
    struct Node *p=head;
    printf("[");
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("]");
}
int main(){
    struct Node *list1=NULL;
    struct Node *temp1=NULL;
    struct Node *list2=NULL;
    struct Node *temp2=NULL;
    int n;
    printf("Enter no. of nodes for 1st Linked List:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        struct Node *newnode1=(struct Node *) malloc(sizeof(struct Node));
        newnode1->next=0;
        scanf("%d",&newnode1->data);
        if(list1==0){
            list1=newnode1;
            temp1=list1;
        }
        else{
            temp1->next=newnode1;
            temp1=newnode1;
        }
    }
    int m;
    printf("Enter no. of nodes for 2nd Linked List:");
    scanf("%d",&m);
    printf("Enter the elements:");
    for(int i=0;i<m;i++){
        struct Node *newnode2=(struct Node *) malloc(sizeof(struct Node));
        newnode2->next=0;
        scanf("%d",&newnode2->data);
        if(list2==0){
            list2=newnode2;
            temp2=list2;
        }
        else{
            temp2->next=newnode2;
            temp2=newnode2;
        }
    }
    printf("1st Linked List is:");
    printList(list1);
    printf("\n2nd Linked List is:");
    printList(list2);
    struct Node *new=mergeTwoLists(list1,list2);
    printf("\nAfter merging two sorted linked list:");
    printList(new);
    return 0;
}