#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int length(struct Node *head){
        struct Node *temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
}
struct Node *getIntersectionNode(struct Node *headA,struct Node *headB) {
    int sizeA=length(headA);
    int sizeB=length(headB);
    struct Node *tempA=headA;
    struct Node *tempB=headB;
    while(sizeA>sizeB){
        tempA=tempA->next;
        sizeA--;
    }
    while(sizeB>sizeA){
        tempB=tempB->next;
        sizeB--;
    }
    while(tempA!=tempB){
        tempA=tempA->next;
        tempB=tempB->next;
    }
    return tempA;
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
    struct Node *headA=NULL;
    struct Node *temp1=NULL;
    struct Node *headB=NULL;
    struct Node *temp2=NULL;
    int n;
    printf("Enter no. of nodes for 1st Linked List:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        struct Node *newnode1=(struct Node *) malloc(sizeof(struct Node));
        newnode1->next=0;
        scanf("%d",&newnode1->data);
        if(headA==0){
            headA=newnode1;
            temp1=headA;
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
        if(headB==0){
            headB=newnode2;
            temp2=headB;
        }
        else{
            temp2->next=newnode2;
            temp2=newnode2;
        }
    }
    printf("1st Linked List is:");
    printList(headA);
    printf("\n2nd Linked List is:");
    printList(headB);
    struct Node *new=getIntersectionNode(headA,headB);
    printf("\nAfter intersecting two linked lists:");
    printList(new);
    return 0;
}