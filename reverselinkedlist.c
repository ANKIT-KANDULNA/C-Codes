#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node* reverseList(struct Node* head) {
    struct Node *curr=head;
    struct Node *prev=NULL;
    struct Node *next=NULL;
    while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
    head=prev;
    return head;
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
    struct Node *head=NULL;
    struct Node *temp=NULL;
    int n;
    printf("Enter no. of nodes:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        struct Node *newnode=(struct Node *) malloc(sizeof(struct Node));
        newnode->next=0;
        scanf("%d",&newnode->data);
        if(head==0){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    printf("Linked List is:");
    printList(head);
    struct Node *new=reverseList(head);
    printf("\nLinked List in reverse order:");
    printList(new);
    return 0;
}