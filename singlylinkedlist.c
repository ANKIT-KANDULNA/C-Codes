#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void InsertAtHead(struct Node **head){
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
    printf("Insert the element at beginning:");
    scanf("%d",&(temp->data));
    temp->next=*head;
    *head=temp;
}
void InsertAtTail(struct Node **tail){
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
    printf("Insert the element at end:");
    scanf("%d",&(temp->data));
    temp->next=NULL;
    (*tail)->next=temp;
    *tail=temp;

}
void InsertAtMiddle(struct Node **head,struct Node **tail,int i){
    if(i==1){
        InsertAtHead(head);
        return;
    }
    struct Node *temp=*head;
    int count=1;
    while(count<i-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        InsertAtTail(tail);
        return;
    }
    struct Node *nodetoInsert=(struct Node *)malloc(sizeof(struct Node));
    printf("Insert the element:");
    scanf("%d",&(nodetoInsert->data));
    nodetoInsert->next=temp->next;
    temp->next=nodetoInsert;
}
void DeleteNode(struct Node **head,struct Node **curr,int i){
    if(i==1){
        struct Node *temp=*head;
        (*head)=(*head)->next;
        temp->next=NULL;
        free(temp);
    }
    else{
        struct Node *curr=*head;
        struct Node *prev=NULL;
        int count=1;
        while(count<i){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        free(curr);
    }
}
void printNode(struct Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    struct Node *node1=(struct Node *)malloc(sizeof(struct Node));
    struct Node *head=node1;
    struct Node *curr=head;
    struct Node *tail=node1;
    head->data=10;
    head->next=NULL;
    InsertAtHead(&head);
    InsertAtTail(&tail);
    InsertAtMiddle(&head,&tail,2);
    DeleteNode(&head,&curr,1);
    printf("Linked List:");
    printNode(head);
    return 0;
}
