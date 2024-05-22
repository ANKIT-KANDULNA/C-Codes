#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
void InsertAtHead(struct Node **head,struct Node **tail){
    if(*head==NULL){
        struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
        printf("Insert the element at beginning:");
        scanf("%d",&(temp->data));
        *head=temp;
        *tail=temp;
    }
    else{
        struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
        printf("Insert the element at beginning:");
        scanf("%d",&(temp->data));
        temp->next=*head;
        (*head)->prev=temp;
        *head=temp;
    }
}
void InsertAtTail(struct Node **head,struct Node **tail){
    if(*tail==NULL){
        struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
        printf("Insert the element at end:");
        scanf("%d",&(temp->data));
        *tail=temp;
        *head=temp;
    }
    else{
        struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
        printf("Insert the element at end:");
        scanf("%d",&(temp->data));
        temp->next=NULL;
        (*tail)->next=temp;
        *tail=temp;
    }
}
void InsertAtMiddle(struct Node **head,struct Node **tail,int i){
    if(i==1){
        InsertAtHead(head,tail);
        return;
    }
    struct Node *temp=*head;
    int count=1;
    while(count<i-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        InsertAtTail(head,tail);
        return;
    }
    struct Node *nodetoInsert=(struct Node *)malloc(sizeof(struct Node));
    printf("Insert the element:");
    scanf("%d",&(nodetoInsert->data));
    nodetoInsert->next=temp->next;
    temp->next->prev=nodetoInsert;
    temp->next=nodetoInsert;
    nodetoInsert->prev=temp;
}
void DeleteNode(struct Node **head,struct Node **curr,int i){
    if(i==1){
        struct Node *temp=*head;
        temp->next->prev=NULL;
        (*head)=(*head)->next;
        temp->next=NULL;
        free(temp);
    }
    else{
        struct Node *curr=*head;
        struct Node *prev=NULL;
        if(curr->next!=NULL){
            curr->next->prev=prev; 
            // This line is essential to maintain the integrity of the linked list.
        }
        int count=1;
        while(count<i){
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
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
    InsertAtHead(&head,&tail);
    InsertAtTail(&head,&tail);
    InsertAtMiddle(&head,&tail,2);
    DeleteNode(&head,&curr,1);
    printf("Linked List:");
    printNode(head);
    return 0;
}
