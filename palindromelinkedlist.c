#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *mid(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
struct Node *reverse(struct Node *head) {
    if(head==NULL || head->next==NULL) {
        return head;
    }
    struct Node *reversedTail=head->next;
    struct Node *ans=reverse(head->next);
    reversedTail->next=head;
    head->next=NULL;
    return ans;
}
bool isPalindrome(struct Node *head) {
    if(head==NULL || head->next==NULL) {
        return 1;
    }
    struct Node *midNode=mid(head);
    struct Node *secondHalf=reverse(midNode->next);
    struct Node *start=head;
    struct Node *end=secondHalf;
    while(end!=NULL){
        if(start->data!=end->data) {
            return 0;
        }
        start=start->next;
        end=end->next;
    }
    return 1;
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
    bool result=isPalindrome(head);
    if(result==1){
        printf("\nLinked List is Palindrome.");
    }
    else{
        printf("\nLinked List is Not Palindrome.");
    }
    return 0;
}